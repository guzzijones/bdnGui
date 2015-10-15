#include "editmasters_dialog.h"
#include "dbcon.h"
#include "editstates.h"
#include "editchain.h"

#include "editcode_desc.h"
#include <string>
#include <iostream>
#include <pqxx/pqxx>
#include <sstream>


using namespace std;
using namespace pqxx;
using namespace PGSTD;
//(*InternalHeaders(editmasters_dialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(editmasters_dialog)
const long editmasters_dialog::ID_STATICTEXT1 = wxNewId();
const long editmasters_dialog::ID_BUTTON1 = wxNewId();
const long editmasters_dialog::ID_BUTTON2 = wxNewId();
const long editmasters_dialog::ID_BUTTON3 = wxNewId();
const long editmasters_dialog::ID_acct_type_4 = wxNewId();
const long editmasters_dialog::ID_FOODTYPE = wxNewId();
const long editmasters_dialog::ID_chain = wxNewId();
const long editmasters_dialog::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(editmasters_dialog,wxDialog)
	//(*EventTable(editmasters_dialog)
	//*)
END_EVENT_TABLE()

editmasters_dialog::editmasters_dialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(editmasters_dialog)
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer1 = new wxFlexGridSizer(4, 1, 0, 0);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Edit Masters"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("States"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("License Types"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	FlexGridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Trade Channels"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	FlexGridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	account_type_b = new wxButton(Panel1, ID_acct_type_4, _("Account Type"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_acct_type_4"));
	FlexGridSizer1->Add(account_type_b, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	food_type = new wxButton(Panel1, ID_FOODTYPE, _("Food Type"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_FOODTYPE"));
	FlexGridSizer1->Add(food_type, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	chain_info = new wxButton(Panel1, ID_chain, _("Chain Info"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_chain"));
	FlexGridSizer1->Add(chain_info, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(Panel1);
	FlexGridSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editmasters_dialog::OnButton1Click);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editmasters_dialog::OnButton2Click);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editmasters_dialog::OnButton3Click);
	Connect(ID_acct_type_4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editmasters_dialog::Onaccount_type_bClick);
	Connect(ID_FOODTYPE,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editmasters_dialog::Onfood_typeClick);
	Connect(ID_chain,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&editmasters_dialog::Onchain_infoClick);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&editmasters_dialog::OnInit);
	//*)


}

editmasters_dialog::~editmasters_dialog()
{
	//(*Destroy(editmasters_dialog)
	//*)
}

void editmasters_dialog::OnChoice1Select(wxCommandEvent& event)
{

}

void editmasters_dialog::OnInit(wxInitDialogEvent& event)
{






}

void editmasters_dialog::OnButton1Click(wxCommandEvent& event)
{
     editstates * edit_states_d1;
    edit_states_d1 = new editstates(this);
    edit_states_d1->ShowModal();
    delete edit_states_d1;

}

void editmasters_dialog::OnButton2Click(wxCommandEvent& event)
{
      wxWindow* parent;
    wxWindowID id=wxID_ANY;
    const wxPoint& pos=wxDefaultPosition;
    const wxSize& size=wxDefaultSize;

    wxString table=_("license_type");
    wxString code=_("code");
    wxString desc=_("license type");
    wxString name=_("license type");

    editcode_desc * editltype_dialog;
    editltype_dialog = new editcode_desc(this,id,pos,size,table,code,desc,name);
    editltype_dialog->ShowModal();
    delete editltype_dialog;
}

void editmasters_dialog::OnButton3Click(wxCommandEvent& event)
{
    wxString table=_("trade_channel");
    wxString code=_("code");
    wxString desc=_("Trade Channel");
    wxString name=_("Trade Channel");

    wxWindow* parent;
    wxWindowID id=wxID_ANY;
    const wxPoint& pos=wxDefaultPosition;
    const wxSize& size=wxDefaultSize;

    editcode_desc * edittrade_dialog;
    edittrade_dialog = new editcode_desc(this,id,pos,size,table,code,desc,name);
    edittrade_dialog->ShowModal();
    delete edittrade_dialog;


}

void editmasters_dialog::Onaccount_type_bClick(wxCommandEvent& event)
{
       editcode_desc* editaccttype_dialog;
    editaccttype_dialog = new editcode_desc(this);
    editaccttype_dialog->ShowModal();
    delete editaccttype_dialog;
}



void editmasters_dialog::Onchain_infoClick(wxCommandEvent& event)
{
    editchain* editchain_dialog;
      editchain_dialog = new editchain(this);
    editchain_dialog->ShowModal();
    delete editchain_dialog;
}

void editmasters_dialog::Onfood_typeClick(wxCommandEvent& event)
{
        wxString table=_("food_type");
    wxString code=_("code");
    wxString desc=_("food_type_desc");
    wxString name=_("Food Type");

    wxWindow* parent;
    wxWindowID id=wxID_ANY;
    const wxPoint& pos=wxDefaultPosition;
    const wxSize& size=wxDefaultSize;

        editcode_desc* editfoodtype_dialog;
    editfoodtype_dialog = new editcode_desc(this,id,pos,size,table,code,desc,name);
    editfoodtype_dialog->ShowModal();
    delete editfoodtype_dialog;
}
