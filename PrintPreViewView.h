
// PrintPreViewView.h : interface of the CPrintPreViewView class
//

#pragma once


class CPrintPreViewView : public CView
{
protected: // create from serialization only
	CPrintPreViewView();
	DECLARE_DYNCREATE(CPrintPreViewView)

// Attributes
public:
	CPrintPreViewDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CPrintPreViewView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in PrintPreViewView.cpp
inline CPrintPreViewDoc* CPrintPreViewView::GetDocument() const
   { return reinterpret_cast<CPrintPreViewDoc*>(m_pDocument); }
#endif

