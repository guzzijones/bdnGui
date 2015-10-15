#include "editchain.h"

#include "dbcon.h"
#include <string>
#include <iostream>
#include <sstream>
#include <wx/msgdlg.h>
#include <wx/imaglist.h>
#include <list>

//(*InternalHeaders(editchain)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(editchain)
const long editchain::ID_STATICTEXT1 = wxNewId();
const long editchain::ID_TEXTCODE = wxNewId();
const long editchain::ID_STATICTEXT2 = wxNewId();
const long editchain::ID_Name = wxNewId();
const long editchain::ID_STATICTEXT3 = wxNewId();
const long editchain::ID_CHOICE1 = wxNewId();
const long editchain::ID_STATICTEXT4 = wxNewId();
const long editchain::ID_CHOICE2 = wxNewId();
const long editchain::ID_STATICTEXT5 = wxNewId();
const long editchain::ID_CHOICE3 = wxNewId();
const long editchain::ID_STATICTEXT6 = wxNewId();
const long editchain::ID_CHOICE4 = wxNewId();
const long editchain::ID_Add = wxNewId();
const long editchain::ID_GRID1 = wxNewId();
const long editchain::ID_Delete = wxNewId();
const long editchain::ID_PANEL1 = wxNewId();
//*)

using namespace std;
BEGIN_EVENT_TABLE(editchain,wxDialog)
	//(*EventTable(editchain)
	//*)
END_EVENT_TABLE()

editchain::editchain(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{


	//(*Initialize(editchain)
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;
	
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer1 = new wxFlexGridSizer(3, 2, 0, 0);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Chain Code"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	TextCode = new wxTextCtrl(Panel1, ID_TEXTCODE, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCODE"));
	FlexGridSizer1->Add(TextCode, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Chain Name"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	TextName = new wxTextCtrl(Panel1, ID_Name, wxEmptyString, wxDefaultPosition, wxSize(293,27), 0, wxDefaultValidator, _T("ID_Name"));
	FlexGridSizer1->Add(TextName, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Chain License Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	FlexGridSizer1->Add(StaticText3, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	Choice1 = new wxChoice(Panel1, ID_CHOICE1, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
	FlexGridSizer1->Add(Choice1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Chain Trade Channel"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	FlexGridSizer1->Add(StaticText4, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	Choice2 = new wxChoice(Panel1, ID_CHOICE2, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
	FlexGridSizer1->Add(Choice2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Chain Food Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	FlexGridSizer1->Add(StaticText5, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	Choice3 = new wxChoice(Panel1, ID_CHOICE3, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
	FlexGridSizer1->Add(Choice3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Chain Account Type"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT6"));
	FlexGridSizer1->Add(StaticText6, 1, wxALL|wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL, 5);
	Choice4 = new wxChoice(Panel1, ID_CHOICE4, wxDefaultPosition, wxDefaultSize, 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
	FlexGridSizer1->Add(Choice4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(-1,-1,1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Add = new wxButton(Panel1, ID_Add, _("Add"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_Add"));
	FlexGridSizer1->Add(Add, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Grid1 = new wxGrid(Panel1, ID_GRID1, wxDefaultPosition, wxSize(365,183), 0, _T("ID_GRID1"));
	FlexGridSizer1->Add(Grid1, 0, wxALIGN_LEFT|wxALIGN_TOP, 0);
	Delete = new wxButton(Panel1, ID_Delete, _("Delete"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_Delete"));
	FlexGridSizer1->Add(Delete, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(Panel1);
	FlexGridSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	
	Connect(ID_TEXTCODE,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editchain::OnTextCodeTextupdated);
	Connect(ID_Name,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&editchain::OnTextNameTextupdated);
	Connect(ID_Add,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editchain::OnAddClick);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&editchain::OnInit);
	//*)
   //


}

editchain::~editchain()
{
	delete Choice1;
	//(*Destroy(editchain)
	//*)
}
void editchain::enableadd(){
    if(TextCode->IsEmpty()!=true && TextName->IsEmpty()!=true){
    Add->Enable();
    }
    else{
    Add->Disable();
    }
}
void editchain::load_choice(wxChoice * &choice,const char * query){
  dbcon * Conn2;
      Conn2 = new dbcon;
      Conn2->SetConnection();
    //fill wxchoice
    pqxx::result r_license_code;
    std::stringstream ss;

    ss << query;
    string sql = ss.str();
    const char * ch_sql = sql.c_str();
  try{
    r_license_code=Conn2->querry(ch_sql);
    } catch (const std::exception &e){

         std::stringstream ss_error;
         ss_error << std::cerr << e.what();
         std::string sql_err = ss_error.str();
         const char * c = sql_err.c_str();
          wxMessageBox(wxString(c,wxConvUTF8), _("ERROR"));

         }
    Conn2->Disconnect();
    delete Conn2;
    int r_lc_count;
    r_lc_count =0;
    size_t listindex=0;
    for (result::const_iterator c = r_license_code.begin(); c != r_license_code.end(); ++c) {
  //   stringstream r_state;
      const char* r_chainname;
      r_chainname = c[1].c_str();
        wxString r_wx_chainname;
      r_wx_chainname=wxString(r_chainname,wxConvLocal);
    const char* r_chaincode;
      r_chaincode = c[0].c_str();
        choice->SetColumns(1);
      choice->Append( r_wx_chainname );
      wxString * s;
      s = new wxString;
      s->Printf(wxString(r_chaincode,wxConvLocal));
     choice->SetClientData( listindex,(wxClientData*)s );

      listindex=listindex+1;
    }
}

wxString editchain::getdesc(char * code,const char * column, const char * table){
   wxString description;
   //connect to db
      dbcon * Conn;
      Conn = new dbcon;
    pqxx::result R;

    std::stringstream ss1;
    //get description from db
    ss1 << "select " << column << " from " << table << " where code like \'" << code << "\'";
    string sql = ss1.str();
    const char * ch_sql = sql.c_str();
    try{
    R=Conn->querry(ch_sql);
    }catch (const std::exception &e){

         std::stringstream ss_error;
         ss_error << std::cerr << e.what();
         std::string sql_err = ss_error.str();
         const char * c = sql_err.c_str();

          wxMessageBox(wxString(c,wxConvUTF8), _("ERROR"));

         }
    //disconnect
    Conn->Disconnect();
    delete Conn;
    description=wxString(ch_sql,wxConvUTF8);
   return description;
}

void editchain::loaddialog(const char * order, const char * direction){
    Choice1->Clear();
    load_choice(Choice1,"select code, \"license type\" from license_type");
    Choice2->Clear();
    load_choice(Choice2,"select code,\"Trade Channel\" from trade_channel");
    Choice3->Clear();
    load_choice(Choice3,"select code,\"food_type_desc\" from food_type");
    Choice4->Clear();
    load_choice(Choice4,"select code,\"account type\" from account_type");

    //fill grid
    pqxx::result R;
    std::stringstream ss1;
    ss1 << "select code , " <<
    "\"chain name\" , " <<
    "\"chain_trade_channel_code\" , " <<
    "\"chain_food_type_code\" , " <<
    "\"chain_account_type_code\" , " <<
    "\"chain license type code\" " <<
    "from chain_code order by \"" << order << "\" " << direction;
    string sql = ss1.str();
    const char * ch_sql = sql.c_str();
     dbcon * Conn;
      Conn = new dbcon;
    Conn->SetConnection();
    try{
    R=Conn->querry(ch_sql);
      } catch (const std::exception &e){

         std::stringstream ss_error;
         ss_error << std::cerr << e.what();
         std::string sql_err = ss_error.str();
         const char * c = sql_err.c_str();

          wxMessageBox(wxString(c,wxConvUTF8), _("ERROR"));

         }
    Conn->Disconnect();
    delete Conn;


    int count;
    count =0;
    for (result::const_iterator c = R.begin(); c != R.end(); ++c) {
    count = count +1;
    }


      //get current contents and delete them
        int ir;
      ir=Grid1->GetNumberRows();
      Grid1->DeleteRows(0,ir);
      int irc;
      irc=Grid1->GetNumberCols();
      Grid1->DeleteCols(0,irc);

      //draw a new grid with new size
      Grid1->CreateGrid(0,0);
      Grid1->AppendCols(5);
      Grid1->SetColLabelValue(0,_("code"));
      Grid1->SetColLabelValue(1,_("chain name"));
      Grid1->SetColLabelValue(2,_("license type"));
      Grid1->SetColLabelValue(2,_("food type"));
      Grid1->SetColLabelValue(2,_("trade channel"));
      Grid1->SetColLabelValue(2,_("account type"));

      Grid1->AppendRows(count);

    int i;
    i=0;
    //fill new grid
    for (result::const_iterator c = R.begin(); c != R.end(); ++c) {

       const char* r_code;
      r_code = c[0].c_str();
      const char* r_ltype;
      r_ltype = c[1].c_str();
        const char* c_type_code;
      c_type_code = c[2].c_str();


    Grid1->SetCellValue(i,0,wxString(r_code, wxConvUTF8));
    Grid1->SetCellValue(i,1,wxString(r_ltype, wxConvUTF8));
    Grid1->SetCellValue(i,2,wxString(c_type_code, wxConvUTF8));
     Grid1->SetCellValue(i,3,wxString(c_type_code, wxConvUTF8));
    Grid1->SetReadOnly(i,0,true) ; //

    i=i+1;
    }
    ///// button settings
    TextCode->Clear();
    TextName->Clear();
    TextCode->SetFocus();
     Delete->Disable();
     Add->Disable();


}




void editchain::OnInit(wxInitDialogEvent& event)
{
   loaddialog("chain name","ASC");
}

void editchain::OnTextCodeTextupdated(wxCommandEvent& event)
{
    enableadd();
}

void editchain::OnTextNameTextupdated(wxCommandEvent& event)
{
         enableadd();
}

void editchain::OnAddClick(wxCommandEvent& event)
{

     try{
    dbcon * Conn;
      Conn = new dbcon;
    Conn->SetConnection();
    pqxx::result R;



    std::stringstream ss;
    wxString wx_str;
    wx_str=TextCode->GetValue();
    string c_text_code;
    c_text_code=wx_str.mb_str();

    wx_str=TextName->GetValue();
    string c_text_desc;
    c_text_desc=wx_str.mb_str();

    int sel;
    wxString* d_pointer;
    wxString d_value;

    sel=Choice1->GetSelection();
    d_pointer=(wxString *)(Choice1->GetClientData(sel));
    string c_text_ltypecode;
    d_value= *d_pointer;
    c_text_ltypecode=d_value.mb_str();

    sel=Choice2->GetSelection();
    d_pointer=(wxString *)(Choice2->GetClientData(sel));
    string c_text_tradecode;
    d_value= *d_pointer;
    c_text_tradecode=d_value.mb_str();

    sel=Choice3->GetSelection();
    d_pointer=(wxString *)(Choice3->GetClientData(sel));
    string c_text_foodcode;
    d_value= *d_pointer;
    c_text_foodcode=d_value.mb_str();

    sel=Choice4->GetSelection();
    d_pointer=(wxString *)(Choice4->GetClientData(sel));
    string c_text_acctcode;
    d_value= *d_pointer;
    c_text_acctcode=d_value.mb_str();

    ss << "insert into chain_code (code, "<<
    "\"chain name\","<<
    "\"chain license type code\","<<
    "\"chain_trade_channel_code\"," <<
    "\"chain_food_type_code\","<<
    "\"chain_account_type_code\")" <<
    " values ( \'"
     << c_text_code << "\',\'"
     << c_text_desc <<"\',\'"
     << c_text_ltypecode <<"\',\'"
     << c_text_tradecode <<"\',\'"
     << c_text_foodcode <<"\',\'"
     << c_text_acctcode <<"\');";

    string sql = ss.str();


    //const char * ch_sql = sql.c_str();
     R=Conn->querry(sql);
    //wxMessageBox(wxString(ch_sql,wxConvUTF8), _("Note"));
    Conn->Disconnect();
    delete Conn;
    loaddialog("chain name","ASC");
   // TextCtrl1->SetFocus();
    }
    catch (const std::exception &e){
     stringstream ss_error;
     ss_error << cerr << e.what();
     string sql_err = ss_error.str();
     const char * c = sql_err.c_str();

      wxMessageBox(wxString(c,wxConvUTF8), _("ERROR"));

     }
}

void editchain::OnGrid1CellLeftClick(wxGridEvent& event)
{
}
