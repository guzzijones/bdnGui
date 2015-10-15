#include "sql_error_dialog.h"

//(*InternalHeaders(sql_error_dialog)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(sql_error_dialog)
const long sql_error_dialog::ID_STATICTEXT1 = wxNewId();
const long sql_error_dialog::ID_TEXTCTRL1 = wxNewId();
const long sql_error_dialog::ID_BUTTON1 = wxNewId();
const long sql_error_dialog::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(sql_error_dialog,wxDialog)
	//(*EventTable(sql_error_dialog)
	//*)
END_EVENT_TABLE()

sql_error_dialog::sql_error_dialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(sql_error_dialog)
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;
	
	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	FlexGridSizer1 = new wxFlexGridSizer(0, 1, 0, 0);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Error"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	FlexGridSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	TextCtrl1 = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	TextCtrl1->Disable();
	FlexGridSizer1->Add(TextCtrl1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	FlexGridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(FlexGridSizer1);
	FlexGridSizer1->Fit(Panel1);
	FlexGridSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);
	
	Connect(ID_TEXTCTRL1,wxEVT_COMMAND_TEXT_UPDATED,(wxObjectEventFunction)&sql_error_dialog::OnTextCtrl1Text);
	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&sql_error_dialog::OnInit);
	//*)
}

sql_error_dialog::~sql_error_dialog()
{
	//(*Destroy(sql_error_dialog)
	//*)
}


void sql_error_dialog::OnTextCtrl1Text(wxCommandEvent& event)
{
}

void sql_error_dialog::OnInit(wxInitDialogEvent& event)
{
}
