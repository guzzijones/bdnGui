#ifndef EDITMASTERS_DIALOG_H
#define EDITMASTERS_DIALOG_H

//(*Headers(editmasters_dialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class editmasters_dialog: public wxDialog
{
	public:

		editmasters_dialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~editmasters_dialog();

		//(*Declarations(editmasters_dialog)
		wxButton* account_type_b;
		wxButton* Button1;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxButton* Button2;
		wxButton* food_type;
		wxButton* Button3;
		wxButton* chain_info;
		//*)

	protected:

		//(*Identifiers(editmasters_dialog)
		static const long ID_STATICTEXT1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_acct_type_4;
		static const long ID_FOODTYPE;
		static const long ID_chain;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(editmasters_dialog)
		void OnChoice1Select(wxCommandEvent& event);
		void OnInit(wxInitDialogEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void Onaccount_type_bClick(wxCommandEvent& event);
		void Onchain_infoClick(wxCommandEvent& event);
		void Onfood_typeClick(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
