#ifndef editcode_desc_H
#define editcode_desc_H

//(*Headers(editcode_desc)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/statline.h>
#include <wx/panel.h>
#include <wx/grid.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class editcode_desc: public wxDialog
{
	public:

		editcode_desc(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize,
      wxString wxtable=_("account_type"),
      wxString wxcode_field=_("code"),
      wxString wxdesc_field=_("account type"),
      wxString wxform_name=_("account type")
      );
		virtual ~editcode_desc();
        bool sort_bool;

        wxString wxtable;
      wxString wxcode_field;
      wxString wxdesc_field;
      wxString wxform_name;
		//(*Declarations(editcode_desc)
		wxStaticText* StaticText2;
		wxButton* Button1;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxGrid* Grid1;
		wxStaticLine* StaticLine2;
		wxButton* Button6;
		wxButton* Button3;
		wxStaticLine* StaticLine1;
		wxTextCtrl* TextCtrl2;
		wxTextCtrl* TextCtrl1;
		//*)

	protected:

		//(*Identifiers(editcode_desc)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON6;
		static const long ID_STATICLINE1;
		static const long ID_STATICLINE2;
		static const long ID_GRID1;
		static const long ID_BUTTON3;
		static const long ID_PANEL1;
		//*)

	private:
        int edit;


        void loaddialog(const char * order, const char * direction);
          void enableadd();
          void SetColumnImage(int col, int image);
		//(*Handlers(editcode_desc)
		void OnButton1Click(wxCommandEvent& event);
		void OnInit(wxInitDialogEvent& event);
		void OnTextCtrl2Text(wxCommandEvent& event);
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnButton3Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnButton6Click(wxCommandEvent& event);
		void OnGrid1CellLeftClick(wxGridEvent& event);
		void OnGrid1LabelLeftClick(wxGridEvent& event);
		void OnGrid1CellLeftClick1(wxGridEvent& event);
		void OnGrid1CellLeftClick2(wxGridEvent& event);
		void OnGrid1CellChange(wxGridEvent& event);
		//*)
		//void OnCellValueChanged(wxGridEvent& event);

		DECLARE_EVENT_TABLE()
};

#endif
