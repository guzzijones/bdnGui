#include "sup_process.h"
#include "client.h"
#include "dbcon.h"

#include <iostream>
#include <sstream>
#include <wx/msgdlg.h>
#include <wx/imaglist.h>
#include <list>


//(*InternalHeaders(sup_process)
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(sup_process)
const long sup_process::ID_CHECKLISTBOX1 = wxNewId();
const long sup_process::ID_BUTTON1 = wxNewId();
const long sup_process::ID_BUTTON2 = wxNewId();
const long sup_process::ID_BUTTON3 = wxNewId();
const long sup_process::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(sup_process,wxDialog)
	//(*EventTable(sup_process)
	//*)
END_EVENT_TABLE()

sup_process::sup_process(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(sup_process)
	wxBoxSizer* BoxSizer2;
	wxGridSizer* GridSizer1;
	wxBoxSizer* BoxSizer1;
	wxGridSizer* GridSizer2;

	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	GridSizer1 = new wxGridSizer(0, 2, 0, 0);
	BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
	CheckListBox1 = new wxCheckListBox(Panel1, ID_CHECKLISTBOX1, wxDefaultPosition, wxSize(500,500), 0, 0, 0, wxDefaultValidator, _T("ID_CHECKLISTBOX1"));
	BoxSizer2->Add(CheckListBox1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(BoxSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer2 = new wxGridSizer(3, 1, 0, 0);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("Process"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	GridSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(Panel1, ID_BUTTON2, _("Archive"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	GridSizer2->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button3 = new wxButton(Panel1, ID_BUTTON3, _("Label"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	GridSizer2->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	GridSizer1->Add(GridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(GridSizer1);
	GridSizer1->Fit(Panel1);
	GridSizer1->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(wxID_ANY,wxEVT_INIT_DIALOG,(wxObjectEventFunction)&sup_process::OnInit);
	//*)
}

sup_process::~sup_process()
{
	//(*Destroy(sup_process)
	//*)

}

void sup_process::load_dialog(){
//  int conn_status;
 // client * conn_server = new client;
  //connect to server
 // conn_status=conn_server->setconnection();
}


void sup_process::OnInit(wxInitDialogEvent& event)
{
   load_dialog();
}

void sup_process::OnButton1Click(wxCommandEvent& event)
{

}
