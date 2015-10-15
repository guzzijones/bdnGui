#include "editsup.h"
#include "dbcon.h"

#include "sup_master.h"
#include <wx/intl.h>
#include <wx/listctrl.h>
#include <wx/string.h>
#include <iostream>
#include <vector>
const long editsup::ID_LISTBOX1 = wxNewId();
const long editsup::ID_STATICTEXT1 = wxNewId();
const long editsup::ID_TEXTCTRL1 = wxNewId();
const long editsup::ID_STATICTEXT2 = wxNewId();
const long editsup::ID_TEXTCTRL2 = wxNewId();
const long editsup::ID_STATICTEXT3 = wxNewId();
const long editsup::ID_TEXTCTRL3 = wxNewId();
const long editsup::ID_STATICTEXT4 = wxNewId();
const long editsup::ID_TEXTCTRL4 = wxNewId();
const long editsup::ID_STATICTEXT5 = wxNewId();
const long editsup::ID_TEXTCTRL5 = wxNewId();
const long editsup::ID_STATICTEXT_INCOME_ZIPFILE = wxNewId();
const long editsup::ID_TEXT_INCOME_ZIPFILE = wxNewId();
const long editsup::ID_PANEL1 = wxNewId();
const long editsup::ID_ADD_BUTTON= wxNewId();
const long editsup::ID_DELETE_BUTTON= wxNewId();

BEGIN_EVENT_TABLE(editsup,wxDialog)

END_EVENT_TABLE()

editsup::editsup(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	wxGridSizer* GridSizer1;
	wxBoxSizer* BoxSizer1;
	wxGridSizer* GridSizer2;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
//create box sizer
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
//create panel with dialog as parent
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
//create grid sizer 1
	GridSizer1 = new wxGridSizer(0, 1, 0, 0);
//create list box
	ListBox1 = new wxListCtrl(Panel1, ID_LISTBOX1, wxDefaultPosition, wxSize(756,200), wxLC_LIST, wxDefaultValidator, _T("ID_LISTBOX1"));
// add list box1 to grid sizer 1
	GridSizer1->Add(ListBox1, 1, wxALL, 5);
// create grid sizer 2
	GridSizer2 = new wxGridSizer(5, 2, 0, 0);
// create text and set panel 1 as parent window
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Supplier Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	GridSizer2->Add(StaticText1, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(350,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	GridSizer2->Add(TextCtrl1, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Supplier ID"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	GridSizer2->Add(StaticText2, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxSize(350,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	GridSizer2->Add(TextCtrl2, 1, wxALL|wxALIGN_LEFT|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("State"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	GridSizer2->Add(StaticText3, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl3 = new wxTextCtrl(Panel1, ID_TEXTCTRL3, _(""), wxDefaultPosition, wxSize(350,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	GridSizer2->Add(TextCtrl3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Zip"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	GridSizer2->Add(StaticText4, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl4 = new wxTextCtrl(Panel1, ID_TEXTCTRL4, _(""), wxDefaultPosition, wxSize(350,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
	GridSizer2->Add(TextCtrl4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Ship Split Script"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT"));
	GridSizer2->Add(StaticText5, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl5 = new wxTextCtrl(Panel1, ID_TEXTCTRL5, _(""), wxDefaultPosition, wxSize(350,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
	GridSizer2->Add(TextCtrl5, 2, wxALL, 5);

	StaticText_income_zipfile = new wxStaticText(Panel1, ID_STATICTEXT_INCOME_ZIPFILE, _("Incoming Zip File"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT_INCOME_ZIPFILE"));
	GridSizer2->Add(StaticText_income_zipfile, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	Text_income_zipfile = new wxTextCtrl(Panel1, ID_TEXT_INCOME_ZIPFILE, _(""), wxDefaultPosition, wxSize(350,27), 0, wxDefaultValidator, _T("ID_TEXT_INCOME_ZIPFILE"));
	GridSizer2->Add(Text_income_zipfile, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
//buttons
   add_button = new wxButton(Panel1, ID_ADD_BUTTON, _("ADD"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_ADD_BUTTON"));
	GridSizer2->Add(add_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
   delete_button = new wxButton(Panel1, ID_DELETE_BUTTON, _("DELETE"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_DELETE_BUTTON"));
	GridSizer2->Add(delete_button, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);

// add Gridsizer 2 to grid sizer 1
	GridSizer1->Add(GridSizer2, 1, wxALL|wxALIGN_TOP|wxALIGN_CENTER_HORIZONTAL, 5);
// set sizer to panel 1 of gridsizer1
//fit panel 1 in gridsizer1
//set and fit
	Panel1->SetSizer(GridSizer1);
	GridSizer1->Fit(Panel1);
	GridSizer1->SetSizeHints(Panel1);

// add panel 1 to box sizer 1
// set and fit
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&editsup::OnInit);
   Connect(ID_ADD_BUTTON,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editsup::On_add_button_click);
   Connect(ID_DELETE_BUTTON,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editsup::On_delete_button_click);

   //on text updated
	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editsup::OnTextCtrl_click);
	Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editsup::OnTextCtrl_click);
	Connect(ID_TEXTCTRL3,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editsup::OnTextCtrl_click);
	Connect(ID_TEXTCTRL4,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editsup::OnTextCtrl_click);
	Connect(ID_TEXTCTRL5,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editsup::OnTextCtrl_click);
	Connect(ID_TEXT_INCOME_ZIPFILE,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editsup::OnTextCtrl_click);
}


void editsup::enableadd(){
    if(TextCtrl1->IsEmpty()!=true
    && TextCtrl2->IsEmpty()!=true
    && TextCtrl3->IsEmpty()!=true
    && TextCtrl4->IsEmpty()!=true
    && TextCtrl5->IsEmpty()!=true
    && Text_income_zipfile->IsEmpty()!=true

    ){
    add_button->Enable();
    }
    else{
    add_button->Disable();
    }
}
void editsup::OnTextCtrl_click(wxCommandEvent& event)
{
    enableadd();
}

void editsup::On_add_button_click(wxCommandEvent& event){
//get sup name
    std::stringstream ss;
    wxString wx_sup_name;
    wx_sup_name=TextCtrl1->GetValue();
    string c_sup_name;
    c_sup_name=wx_sup_name.mb_str();

// get sup id

    wxString wx_sup_id;
    wx_sup_id=TextCtrl2->GetValue();
    string c_sup_id;
    c_sup_id=wx_sup_id.mb_str();


// get sup state

    wxString wx_sup_state;
    wx_sup_state=TextCtrl3->GetValue();
    string c_sup_state;
    c_sup_state=wx_sup_state.mb_str();

// get sup zip

    wxString wx_sup_zip;
    wx_sup_zip=TextCtrl4->GetValue();
    string c_sup_zip;
    c_sup_zip=wx_sup_zip.mb_str();

// get sup script

    wxString wx_sup_script;
    wx_sup_script=TextCtrl5->GetValue();
    string c_sup_script;
    c_sup_script=wx_sup_script.mb_str();



    ss << "insert into sup_master "
    <<" (  master_sup_id ,supplier_name,supplier_state,sup_zip,ship_split_script,incoming_zipfile_name) "

    << " values ( '"
    << c_sup_id<< "','"
    << c_sup_name <<"','"
    << c_sup_state <<"','"
    << c_sup_zip <<"','"
    << c_sup_script << "','"
      <<"')";
    string sql = ss.str();
    const char * ch_sql = sql.c_str();
    //wxMessageBox(wxString(ch_sql,wxConvUTF8), _("Note"));


    dbcon Conn;
    Conn.SetConnection();
    pqxx::result R;
    try{
    R=Conn.querry(sql);
    }
     catch (const std::exception &e){
     stringstream ss_error;
     ss_error << cerr << e.what();
     string sql_err = ss_error.str();
     const char * c = sql_err.c_str();

      wxMessageBox(wxString(c,wxConvUTF8), _("ERROR"));

     }


    Conn.Disconnect();

}
void editsup::On_delete_button_click(wxCommandEvent& event){


}

void editsup::OnInit(wxInitDialogEvent& event){
 dbcon Conn;
    //connect to db
    Conn.SetConnection();
    pqxx::result R;
    R=Conn.querry("select master_sup_id "
                  ",supplier_name "
                  ",supplier_state "
                  ",supplier_zip "
                  ",ship_split_script "
                  ",incoming_zipfile_name "
                  ",yyyymm from sup_master");
    Conn.Disconnect();

   // sm->set_incoming_zipfile_name(_("Name"));

   //get length of array
   int length=0;
    for (result::const_iterator c = R.begin(); c != R.end(); ++c) {

    sup_master * sm;
    sm= new sup_master(
                       wxString(c["master_sup_id"].c_str(),wxConvUTF8),
                       wxString(c["supplier_name"].c_str(),wxConvUTF8),
                       wxString(c["supplier_state"].c_str(),wxConvUTF8),
                       wxString(c["supplier_zip"].c_str(),wxConvUTF8),
                       wxString(c["ship_split_script"].c_str(),wxConvUTF8),
                       wxString(c["incoming_zipfile_name"].c_str(),wxConvUTF8),
                       wxString(c["yyyymm"].c_str(),wxConvUTF8)

                       );
      sm_array.push_back(sm);
      length=length+1;
      delete sm;

    }


    //insert columns
   wxListItem col0;
//   col0.setId(0);
   col0.SetText(_("Name"));
   col0.SetWidth(50);
   ListBox1->InsertColumn(0,col0);

      wxListItem col1;
//   col0.setId(0);
   col1.SetText(_("State"));
   col1.SetWidth(50);
   ListBox1->InsertColumn(1,col1);

   for(int n =0;n<length;++n){
        //column 1


       long itemindex=ListBox1->InsertItem(0,sm_array[n]->get_supplier_name());
    //column 2
       ListBox1->SetItem(itemindex,1,sm_array[n]->get_supplier_state());

   }

//   wxListItem col1;
 //  col1.SetText(_("State"));
  // col1.SetWidth((3));
  // ListBox1->InserColumn(1,col1);

//   i=0;
  // for (i=0;i<length,i++){}
 //  ListBox1->Append();
  // Listbox1->SetItem(i,2,sm.get_supplier_name());
//}




   //here is where i ended.  adding obove object records into a list box that can be sorted and recreated.
}

