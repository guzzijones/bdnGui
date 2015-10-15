/***************************************************************
 * Name:      bdnMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    aj ()
 * Created:   2013-12-03
 * Copyright: aj ()
 * License:
 **************************************************************/

#include "bdnMain.h"
#include "sup_process.h"
#include "editsup.h"
#include "dbcon.h"
//#include "server.h"
#include "editmasters_dialog.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(bdnFrame)
#include <wx/string.h>
#include <wx/intl.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(bdnFrame)
const long bdnFrame::ID_BUTTON1 = wxNewId();
const long bdnFrame::ID_BUTTON2 = wxNewId();
const long bdnFrame::ID_BUTTON3 = wxNewId();
const long bdnFrame::ID_BUTTON4 = wxNewId();
const long bdnFrame::ID_BUTTON5 = wxNewId();
const long bdnFrame::ID_BUTTON6 = wxNewId();
const long bdnFrame::ID_PANEL1 = wxNewId();
const long bdnFrame::Server = wxNewId();
const long bdnFrame::idMenuQuit = wxNewId();
const long bdnFrame::idMenuAbout = wxNewId();
const long bdnFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(bdnFrame,wxFrame)
    //(*EventTable(bdnFrame)
    //*)
END_EVENT_TABLE()

bdnFrame::bdnFrame(wxWindow* parent,wxWindowID id)
{

    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxGridSizer* GridSizer1;
    wxMenu* Menu1;
    wxBoxSizer* BoxSizer1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    GridSizer1 = new wxGridSizer(0, 3, 0, 0);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("Edit Masters"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    GridSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("Edit Dists"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    GridSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button3 = new wxButton(Panel1, ID_BUTTON3, _("Edit Sups"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    GridSizer1->Add(Button3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button4 = new wxButton(Panel1, ID_BUTTON4, _("Prod Cross Ref"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    GridSizer1->Add(Button4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button5 = new wxButton(Panel1, ID_BUTTON5, _("Dist Data Process"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    GridSizer1->Add(Button5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button6 = new wxButton(Panel1, ID_BUTTON6, _("Sup Data Process"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
    GridSizer1->Add(Button6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Panel1->SetSizer(GridSizer1);
    GridSizer1->Fit(Panel1);
    GridSizer1->SetSizeHints(Panel1);
    BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
    SetSizer(BoxSizer1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem3 = new wxMenuItem(Menu1, Server, _("Server"), _("Set Server Variables"), wxITEM_NORMAL);
    Menu1->Append(MenuItem3);
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    BoxSizer1->Fit(this);
    BoxSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&bdnFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&bdnFrame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&bdnFrame::OnButton3Click);
    Connect(Server,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&bdnFrame::onserverclick);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&bdnFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&bdnFrame::OnAbout);

 Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&bdnFrame::OnButton6Click);
}

bdnFrame::~bdnFrame()
{

}

void bdnFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void bdnFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void bdnFrame::OnButton1Click(wxCommandEvent& event)
{
    editmasters_dialog * editm_dialog;
    editm_dialog = new editmasters_dialog(this);
    editm_dialog->ShowModal();

}

void bdnFrame::OnButton2Click(wxCommandEvent& event) //edit dists
{

}
void bdnFrame::OnButton6Click(wxCommandEvent& event)//process sup data
{


}

void bdnFrame::OnButton3Click(wxCommandEvent& event)
{
   editsup * editsup_dialog = new editsup(this);
   editsup_dialog->ShowModal();

}

void bdnFrame::onserverclick(wxCommandEvent& event)
{


}
