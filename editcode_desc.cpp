#include "editcode_desc.h"

#include "dbcon.h"
#include <string>
#include <iostream>
#include <sstream>
#include <wx/msgdlg.h>
#include <wx/imaglist.h>
#include <list>



//(*InternalHeaders(editcode_desc)
#include <wx/intl.h>
#include <wx/string.h>
//*)
using namespace std;
//(*IdInit(editcode_desc)
const long editcode_desc::ID_STATICTEXT1 = wxNewId();
const long editcode_desc::ID_TEXTCTRL2 = wxNewId();
const long editcode_desc::ID_STATICTEXT2 = wxNewId();
const long editcode_desc::ID_TEXTCTRL1 = wxNewId();
const long editcode_desc::ID_BUTTON1 = wxNewId();
const long editcode_desc::ID_BUTTON6 = wxNewId();
const long editcode_desc::ID_STATICLINE1 = wxNewId();
const long editcode_desc::ID_STATICLINE2 = wxNewId();
const long editcode_desc::ID_GRID1 = wxNewId();
const long editcode_desc::ID_BUTTON3 = wxNewId();
const long editcode_desc::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(editcode_desc,wxDialog)
	//(*EventTable(editcode_desc)
	//*)
END_EVENT_TABLE()

editcode_desc::editcode_desc(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size,
wxString wxtable,
wxString wxcode_field,
wxString wxdesc_field,
wxString wxform_name
)
{


	//(*Initialize(editcode_desc)
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;
	wxBoxSizer* BoxSizer3;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(190,109));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer1 = new wxFlexGridSizer(4, 2, 0, 0);
	FlexGridSizer1->AddGrowableCol(2);
	FlexGridSizer1->AddGrowableRow(4);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Code:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl2 = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	TextCtrl2->SetMaxLength(2);
	FlexGridSizer1->Add(TextCtrl2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Description:"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, wxEmptyString, wxDefaultPosition, wxSize(200,27), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->SetMaxLength(25);
	FlexGridSizer1->Add(TextCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	FlexGridSizer1->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Add"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Button1->Disable();
	BoxSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button6 = new wxButton(Panel1, ID_BUTTON6, _("Clear"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	BoxSizer2->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine1 = new wxStaticLine(Panel1, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	FlexGridSizer1->Add(StaticLine1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticLine2 = new wxStaticLine(Panel1, ID_STATICLINE2, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE2"));
	FlexGridSizer1->Add(StaticLine2, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	Grid1 = new wxGrid(Panel1, ID_GRID1, wxDefaultPosition, wxSize(286,219), 0, _T("ID_GRID1"));
	BoxSizer4->Add(Grid1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(BoxSizer4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Delete"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	Button3->Disable();
	BoxSizer5->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(BoxSizer5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(Panel1);
	FlexGridSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_TEXTCTRL2,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editcode_desc::OnTextCtrl2Text);
	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editcode_desc::OnTextCtrl1Text);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editcode_desc::OnButton1Click);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editcode_desc::OnButton6Click);
	Connect(ID_GRID1,wxEVT_GRID_CELL_LEFT_CLICK,(wxObjectEventFunction)&editcode_desc::OnGrid1CellLeftClick2);
	Connect(ID_GRID1,wxEVT_GRID_LABEL_LEFT_CLICK,(wxObjectEventFunction)&editcode_desc::OnGrid1LabelLeftClick);
	Connect(ID_GRID1,wxEVT_GRID_CELL_CHANGE,(wxObjectEventFunction)&editcode_desc::OnGrid1CellChange);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editcode_desc::OnButton3Click);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&editcode_desc::OnInit);
	//*)

   this->wxtable=wxtable;
   this->wxcode_field=wxcode_field;
   this->wxform_name=wxform_name;
   this->wxdesc_field=wxdesc_field;
   this->edit=0;

}

editcode_desc::~editcode_desc()
{
	//(*Destroy(editcode_desc)
	//*)
}


void editcode_desc::OnButton1Click(wxCommandEvent& event)
{

    dbcon Conn;
    Conn.SetConnection();
    pqxx::result R;



    std::stringstream ss;
    wxString wx_code;
    wx_code=TextCtrl2->GetValue();
    string c_code;
    c_code=wx_code.mb_str();

    wxString wx_ltype;
    wx_ltype=TextCtrl1->GetValue();
    string ltype_desc;
    ltype_desc=wx_ltype.mb_str();

    string s_insert_code_field;
    s_insert_code_field=wxcode_field.mb_str();
    string s_insert_desc_field;
    s_insert_desc_field=wxdesc_field.mb_str();
    string s_table_name;
    s_table_name=wxtable.mb_str();

    ss << "insert into " << s_table_name <<" ("<< s_insert_code_field << ",\""<< s_insert_desc_field <<"\"  )   values ( '"
    << c_code << "','" << ltype_desc <<"')";
    string sql = ss.str();
    const char * ch_sql = sql.c_str();
    //wxMessageBox(wxString(ch_sql,wxConvUTF8), _("Note"));


    R=Conn.querry(sql);

   Conn.Disconnect();
       string s_sort_col;
    s_sort_col=this->wxdesc_field.mb_str();
    const char * c_sort_col;
    c_sort_col=s_sort_col.c_str();
    loaddialog(c_sort_col,"ASC");

    TextCtrl2->SetFocus();

}
void editcode_desc::enableadd(){
    if(TextCtrl1->IsEmpty()!=true && TextCtrl2->IsEmpty()!=true){
    Button1->Enable();
    }
    else{
    Button1->Disable();
    }
}
void editcode_desc::loaddialog(const char * order, const char * direction){

    dbcon Conn;
    Conn.SetConnection();
    pqxx::result R;

    std::stringstream ss;

    string s_insert_code_field;
    s_insert_code_field=this->wxcode_field.mb_str();
    string s_insert_desc_field;
    s_insert_desc_field=this->wxdesc_field.mb_str();
    string s_table_name;
    s_table_name=this->wxtable.mb_str();

    ss << "select "<< s_insert_code_field<< " ,\"" << s_insert_desc_field<< "\" from "<< s_table_name <<" order by \""
    << order << "\" " << direction;
    string sql = ss.str();
    const char * ch_sql = sql.c_str();

    R=Conn.querry(ch_sql);

    Conn.Disconnect();



    int count;
    count =0;
    for (result::const_iterator c = R.begin(); c != R.end(); ++c) {
    count = count +1;
    }


      //get current contents and delete them
        int ir;
      ir=Grid1->GetNumberRows();
      if(ir!=NULL){
      Grid1->DeleteRows(0,ir);}
      int irc;

      irc=Grid1->GetNumberCols();
      if(irc!=NULL){
      Grid1->DeleteCols(0,irc);
      }
      //draw a new grid with new size
      Grid1->CreateGrid(0,0);
      Grid1->AppendCols(2);
      Grid1->SetColLabelValue(0,_("code"));
      Grid1->SetColLabelValue(1,this->wxform_name);
      Grid1->AppendRows(count);

    int i;
    i=0;
    //fill new grid
    for (result::const_iterator c = R.begin(); c != R.end(); ++c) {

       const char* r_code;
      r_code = c[0].c_str();
      const char* r_ltype;
      r_ltype = c[1].c_str();

    Grid1->SetCellValue(i,0,wxString(r_code, wxConvUTF8));
    Grid1->SetCellValue(i,1,wxString(r_ltype, wxConvUTF8));
    Grid1->SetReadOnly(i,0,true) ; //

    i=i+1;
    }



    ///// button settings
    TextCtrl1->Clear();
    TextCtrl2->Clear();
    TextCtrl2->SetFocus();
     Button3->Disable();


}



void editcode_desc::OnInit(wxInitDialogEvent& event)
{
  sort_bool=0;
      string s_sort_col;
    s_sort_col=this->wxdesc_field.mb_str();
    const char * c_sort_col;
    c_sort_col=s_sort_col.c_str();
    loaddialog(c_sort_col,"ASC");
}

void editcode_desc::OnTextCtrl2Text(wxCommandEvent& event)
{
    enableadd();
}

void editcode_desc::OnTextCtrl1Text(wxCommandEvent& event)
{
    enableadd();
}

void editcode_desc::OnButton3Click(wxCommandEvent& event)
{

    dbcon Conn;
    Conn.SetConnection();
    pqxx::result R;
    wxArrayInt rows;
    const wxArrayInt cells(Grid1->GetSelectedRows());

    int cell1;
    size_t count = cells.size();

    for (size_t n =0;n<count;n++)
{


        int cell_row=cells[n];
        std::stringstream ss;
        //get wxstring code
        wxString code;
        //get value of row and column 0
        code=Grid1->GetCellValue(cell_row,0);
        //convert to string for db use
        string c_code;
        c_code=code.mb_str();
    string s_insert_code_field;
    s_insert_code_field=wxcode_field.mb_str();
    string s_insert_desc_field;
    s_insert_desc_field=wxdesc_field.mb_str();
    string s_table_name;
    s_table_name=wxtable.mb_str();

        ss << "delete from  "<<s_table_name<<" where "<<s_insert_code_field <<" like '" << c_code << "'";
        string sql = ss.str();
        const char * ch_sql = sql.c_str();
       // wxMessageBox(wxString(ch_sql,wxConvUTF8), _("Note"));

        R=Conn.querry(sql);

    }
    Conn.Disconnect();
    string s_sort_col;
    s_sort_col=this->wxdesc_field.mb_str();
    const char * c_sort_col;
    c_sort_col=s_sort_col.c_str();
    loaddialog(c_sort_col,"ASC");
    TextCtrl2->SetFocus();

     Button3->Disable();
}




void editcode_desc::OnButton6Click(wxCommandEvent& event)
{
            string s_sort_col;
    s_sort_col=this->wxdesc_field.mb_str();
    const char * c_sort_col;
    c_sort_col=s_sort_col.c_str();
    loaddialog(c_sort_col,"ASC");

}






void editcode_desc::OnGrid1LabelLeftClick(wxGridEvent& event)
{
   wxString col_name;
   col_name=Grid1->GetColLabelValue(0);


    int row = event.GetRow(),
        col = 0;
    //if row clicked
    if( event.GetRow() != -1)
    {
          Button3->Enable();

    }
    //if column header clicked
    if( event.GetCol() != -1)
    {
        wxString wlabel;
        int row_value;

        wlabel=Grid1->GetColLabelValue(event.GetCol());
        string s_label;
            s_label=wlabel.mb_str();
            const char * c_label;
            c_label=s_label.c_str();
        Button3->Disable();
        if (sort_bool!=1){

            loaddialog(c_label,"Desc");
            sort_bool=1;
        }
        else{
         loaddialog(c_label,"ASC");
         sort_bool=0;
        }
    }
    event.Skip();
}



void editcode_desc::OnGrid1CellLeftClick2(wxGridEvent& event)
{
     Button3->Disable();
    event.Skip();
}


void editcode_desc::OnGrid1CellChange(wxGridEvent& event)
{
        int row = event.GetRow();
     int   col = event.GetCol();

    dbcon * Conn;
    Conn=new dbcon;
    Conn->SetConnection();
    pqxx::result R;
    wxArrayInt rows;
    wxString w_newltype;
    w_newltype=Grid1->GetCellValue(row,col);
    string c_ltype;
    c_ltype=w_newltype.mb_str();
    wxString w_code;
    w_code=Grid1->GetCellValue(row,0);
    string c_code;
    c_code=w_code.mb_str();

    string s_insert_code_field;
    s_insert_code_field=this->wxcode_field.mb_str();
    string s_insert_desc_field;
    s_insert_desc_field=this->wxdesc_field.mb_str();
    string s_table_name;
    s_table_name=this->wxtable.mb_str();
    std::stringstream ss;
    ss << "update " <<s_table_name<< " set \"" << s_insert_desc_field <<"\" = '"
    << c_ltype << "' where \""<< s_insert_code_field<< "\" like '" << c_code << "'";
     string sql = ss.str();

        R=Conn->querry(sql);

    Conn->Disconnect();
    delete Conn;


     event.Skip();

}

