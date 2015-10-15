#ifndef EDITSUP_H
#define EDITSUP_H
#include "sup_master.h"
#include <vector>
//(*Headers(editsup)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/listbox.h>
#include <wx/listctrl.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class editsup: public wxDialog
{
	public:

		editsup(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~editsup(){
		//delete sm_array;
		};

		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText_income_zipfile;

		wxTextCtrl* TextCtrl1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl3;
		wxTextCtrl* TextCtrl4;
		wxTextCtrl* TextCtrl5;
		wxTextCtrl* Text_income_zipfile;
		wxListCtrl* ListBox1;
     wxButton* add_button;
     wxButton* delete_button;

	protected:

		static const long ID_LISTBOX1;
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT3;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT4;
		static const long ID_TEXTCTRL4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL5;
		static const long ID_STATICTEXT_INCOME_ZIPFILE;
      static const long ID_TEXT_INCOME_ZIPFILE;

		static const long ID_PANEL1;
		static const long ID_ADD_BUTTON;
		static const long ID_DELETE_BUTTON;

	private:

    std::vector<sup_master *> sm_array;

    void OnInit(wxInitDialogEvent& event);
    void enableadd();


     void On_add_button_click(wxCommandEvent& event);
     void OnTextCtrl_click(wxCommandEvent& event);
     void On_delete_button_click(wxCommandEvent& event);


		DECLARE_EVENT_TABLE()
};

#endif
