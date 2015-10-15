/***************************************************************
 * Name:      bdnMain.h
 * Purpose:   Defines Application Frame
 * Author:    aj ()
 * Created:   2013-12-03
 * Copyright: aj ()
 * License:
 **************************************************************/

#ifndef BDNMAIN_H
#define BDNMAIN_H

//(*Headers(bdnFrame)
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
//*)

class bdnFrame: public wxFrame
{
    public:

        bdnFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~bdnFrame();

    private:

        //(*Handlers(bdnFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
         void OnButton6Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void onserverclick(wxCommandEvent& event);
        //*)

        //(*Identifiers(bdnFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_PANEL1;
        static const long Server;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(bdnFrame)
        wxPanel* Panel1;
        wxStatusBar* StatusBar1;
        wxButton* Button4;
        wxButton* Button1;
        wxButton* Button2;
        wxButton* Button3;
        wxMenuItem* MenuItem3;
        wxButton* Button5;
        wxButton* Button6;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // BDNMAIN_H
