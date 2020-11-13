
// PrintPreView.h : main header file for the PrintPreView application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CPrintPreViewApp:
// See PrintPreView.cpp for the implementation of this class
//

class CPrintPreViewApp : public CWinApp
{
public:
	CPrintPreViewApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CPrintPreViewApp theApp;
