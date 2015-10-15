#ifndef EDITCHAIN_H
#define EDITCHAIN_H
//(*Headers(editsup)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/grid.h>
#include <wx/choice.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class editchain: public wxDialog
{
	public:

		editchain(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~editchain();

		//(*Declarations(editchain)
		wxButton* Add;
		wxTextCtrl* TextName;
		wxStaticText* StaticText2;
		wxChoice* Choice3;
		wxStaticText* StaticText6;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxGrid* Grid1;
		wxButton* Delete;
		wxStaticText* StaticText5;
		wxChoice* Choice4;
		wxStaticText* StaticText4;
		wxChoice* Choice1;
		wxTextCtrl* TextCode;
		wxChoice* Choice2;
		//*)

	protected:

		//(*Identifiers(editchain)
		static const long ID_STATICTEXT1;
		static const long ID_TEXTCODE;
		static const long ID_STATICTEXT2;
		static const long ID_Name;
		static const long ID_STATICTEXT3;
		static const long ID_CHOICE1;
		static const long ID_STATICTEXT4;
		static const long ID_CHOICE2;
		static const long ID_STATICTEXT5;
		static const long ID_CHOICE3;
		static const long ID_STATICTEXT6;
		static const long ID_CHOICE4;
		static const long ID_Add;
		static const long ID_GRID1;
		static const long ID_Delete;
		static const long ID_PANEL1;
		//*)


	private:
	void enableadd();
   wxString getdesc(char * order,const char * column, const char * table);
	void load_choice(wxChoice * &choice,const char * query);
    void loaddialog(const char * order, const char * direction);
		//(*Handlers(editchain)
		void OnInit(wxInitDialogEvent& event);
		void OnTextCodeTextupdated(wxCommandEvent& event);
		void OnTextNameTextupdated(wxCommandEvent& event);
		void OnAddClick(wxCommandEvent& event);
		void OnGrid1CellLeftClick(wxGridEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
