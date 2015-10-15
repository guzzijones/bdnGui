#ifndef SQL_ERROR_DIALOG_H
#define SQL_ERROR_DIALOG_H

//(*Headers(sql_error_dialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class sql_error_dialog: public wxDialog
{
	public:



		sql_error_dialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~sql_error_dialog();

		//(*Declarations(sql_error_dialog)
		wxButton* Button1;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(sql_error_dialog)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(sql_error_dialog)
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnInit(wxInitDialogEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
