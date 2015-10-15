#include "editstates.h"
#include "dbcon.h"
#include <string>
#include <iostream>
#include <string>
#include <sstream>
#include <wx/msgdlg.h>
#include <wx/string.h>
//(*InternalHeaders(editstates)
#include <wx/intl.h>
#include <wx/string.h>
//*)
using namespace std;


//(*IdInit(editstates)
const long editstates::ID_TEXTCTRL1 = wxNewId();
const long editstates::ID_BUTTON1 = wxNewId();
const long editstates::ID_STATICLINE1 = wxNewId();
const long editstates::ID_LISTBOX1 = wxNewId();
const long editstates::ID_BUTTON3 = wxNewId();
const long editstates::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(editstates,wxDialog)
	//(*EventTable(editstates)
	//*)
END_EVENT_TABLE()

editstates::editstates(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{


	//(*Initialize(editstates)
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->SetMaxLength(2);
	FlexGridSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("ADD"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->Disable();
	FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine1 = new wxStaticLine(Panel1, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	ListBox1 = new wxListBox(Panel1, ID_LISTBOX1, wxDefaultPosition, wxSize(102,115), 0, 0, wxLB_SORT|wxVSCROLL, wxDefaultValidator, _T("ID_LISTBOX1"));
	FlexGridSizer1->Add(ListBox1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Delete"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(Panel1);
	FlexGridSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editstates::OnTextCtrl1Text);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editstates::OnButton1Click);
	Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_SELECTED,(wxObjectEventFunction)&editstates::OnListBox1Select);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editstates::OnButton3Click);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&editstates::OnInit);
	//*)
}

editstates::~editstates()
{
	//(*Destroy(editstates)
	//*)
}



void editstates::OnInit(wxInitDialogEvent& event)
{
   loaddialog();

}

void editstates::loaddialog(){

    try{
    dbcon Conn;
    Conn.SetConnection();
    pqxx::result R;
    R=Conn.querry("select state from states");
    Conn.Disconnect();
    result::const_iterator d  = R.begin();
    ListBox1->Clear();
     //////////////////////
    //list box load

    for (result::const_iterator c = R.begin(); c != R.end(); ++c) {

    //   stringstream r_state;
      const char* r_state;
      r_state = c["state"].c_str();

      ListBox1->Append( wxString(r_state, wxConvUTF8) );
    }
    TextCtrl1->Clear();
    }
     catch (const std::exception &e){
     stringstream ss_error;
     ss_error << cerr << e.what();
     string sql_err = ss_error.str();
     const char * c = sql_err.c_str();

      wxMessageBox(wxString(c,wxConvUTF8), _("ERROR"));

     }
}

void editstates::OnButton3Click(wxCommandEvent& event)
{
    try{
    dbcon Conn;
    Conn.SetConnection();
    pqxx::result R;



    std::stringstream ss;
    wxString wx_str;
    wx_str=ListBox1->GetStringSelection();
    string c_choice;
    c_choice=wx_str.mb_str();

    ss << "delete from states where state like '" << c_choice << "';";
    string sql = ss.str();
    //const char * ch_sql = sql.c_str();
     R=Conn.querry(sql);
    //wxMessageBox(wxString(ch_sql,wxConvUTF8), _("Note"));
    Conn.Disconnect();
    loaddialog();
     TextCtrl1->SetFocus();
    }
    catch (const std::exception &e){
     stringstream ss_error;
     ss_error << cerr << e.what();
     string sql_err = ss_error.str();
     const char * c = sql_err.c_str();

      wxMessageBox(wxString(c,wxConvUTF8), _("ERROR"));

     }

}
void editstates::OnButton1Click(wxCommandEvent& event)
{
  try{
    dbcon Conn;
    Conn.SetConnection();
    pqxx::result R;



    std::stringstream ss;
    wxString wx_str;
    wx_str=TextCtrl1->GetValue();
    string c_text;
    c_text=wx_str.mb_str();

    ss << "insert into states (state) values( '" << c_text << "');";
    string sql = ss.str();
    //const char * ch_sql = sql.c_str();
     R=Conn.querry(sql);
    //wxMessageBox(wxString(ch_sql,wxConvUTF8), _("Note"));
    Conn.Disconnect();
    loaddialog();
    TextCtrl1->SetFocus();
    }
    catch (const std::exception &e){
     stringstream ss_error;
     ss_error << cerr << e.what();
     string sql_err = ss_error.str();
     const char * c = sql_err.c_str();

      wxMessageBox(wxString(c,wxConvUTF8), _("ERROR"));

     }
}
void editstates::OnTextCtrl1Text(wxCommandEvent& event)
{
    if(TextCtrl1->IsEmpty()!=true){
    Button1->Enable();
    }
    else{
    Button1->Disable();
    }

}



void editstates::OnListBox1Select(wxCommandEvent& event)
{
}
