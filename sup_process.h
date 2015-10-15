#ifndef SUP_PROCESS_H
#define SUP_PROCESS_H

//(*Headers(sup_process)
#include <wx/sizer.h>
#include <wx/checklst.h>
#include <wx/panel.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class sup_process: public wxDialog
{
	public:

		sup_process(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~sup_process();

		//(*Declarations(sup_process)
		wxButton* Button1;
		wxCheckListBox* CheckListBox1;
		wxPanel* Panel1;
		wxButton* Button2;
		wxButton* Button3;
		//*)

	protected:

		//(*Identifiers(sup_process)
		static const long ID_CHECKLISTBOX1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_BUTTON3;
		static const long ID_PANEL1;
		//*)

	private:
        void load_dialog();
		//(*Handlers(sup_process)
		void OnInit(wxInitDialogEvent& event);
		void OnButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
