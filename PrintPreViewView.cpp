
// PrintPreViewView.cpp : implementation of the CPrintPreViewView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "PrintPreView.h"
#endif

#include "PrintPreViewDoc.h"
#include "PrintPreViewView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPrintPreViewView

IMPLEMENT_DYNCREATE(CPrintPreViewView, CView)

BEGIN_MESSAGE_MAP(CPrintPreViewView, CView)
END_MESSAGE_MAP()

// CPrintPreViewView construction/destruction

CPrintPreViewView::CPrintPreViewView()
{
	// TODO: add construction code here

}

CPrintPreViewView::~CPrintPreViewView()
{
}

BOOL CPrintPreViewView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CPrintPreViewView drawing

void CPrintPreViewView::OnDraw(CDC* /*pDC*/)
{
	CPrintPreViewDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CPrintPreViewView diagnostics

#ifdef _DEBUG
void CPrintPreViewView::AssertValid() const
{
	CView::AssertValid();
}

void CPrintPreViewView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPrintPreViewDoc* CPrintPreViewView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPrintPreViewDoc)));
	return (CPrintPreViewDoc*)m_pDocument;
}
#endif //_DEBUG


// CPrintPreViewView message handlers
