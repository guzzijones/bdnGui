/***************************************************************
 * Name:      bdnApp.cpp
 * Purpose:   Code for Application Class
 * Author:    aj ()
 * Created:   2013-12-03
 * Copyright: aj ()
 * License:
 **************************************************************/

#include "bdnApp.h"

//(*AppHeaders
#include "bdnMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(bdnApp);
bool bdnApp::OnInit()
{

    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	bdnFrame* Frame = new bdnFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
