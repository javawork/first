#pragma once
#include <wx/wx.h>

class Shapes : public wxFrame
{
public:
    Shapes(const wxString & title);

    void OnPaint(wxPaintEvent & event);
	void OnKeyDown(wxKeyEvent & event);

private:
	int x;
	int y;

};
// 222