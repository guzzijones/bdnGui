#ifndef EDITSTATES_H
#define EDITSTATES_H

//(*Headers(editstates)
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/listbox.h>
#include <wx/statline.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class editstates: public wxDialog
{
	public:

		editstates(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~editstates();


		//(*Declarations(editstates)
		wxButton* Button1;
		wxPanel* Panel1;
		wxButton* Button3;
		wxStaticLine* StaticLine1;
		wxTextCtrl* TextCtrl1;
		wxListBox* ListBox1;
		//*)

	protected:

		//(*Identifiers(editstates)
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_STATICLINE1;
		static const long ID_LISTBOX1;
		static const long ID_BUTTON3;
		static const long ID_PANEL1;
		//*)

	private:
        void loaddialog();
		//(*Handlers(editstates)
		void OnComboBox1Select(wxCommandEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnInit(wxInitDialogEvent& event);
		void OnChoice1Select(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnListBox1Select(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
