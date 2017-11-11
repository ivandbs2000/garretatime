
#include <wx/wx.h>
#include <iostream>
using namespace std;

class GridSizer : public wxFrame
{
public:
  GridSizer(const wxString& title);

  wxBoxSizer *sizer;
  wxGridSizer *gs;
  wxTextCtrl *display;
  
  void onCls (wxCommandEvent&);
  void onBt0 (wxCommandEvent&);
  void onBt1 (wxCommandEvent&);
  void onBt2 (wxCommandEvent&);
  void onBt3 (wxCommandEvent&);
  void onBt4 (wxCommandEvent&);
  void onBt5 (wxCommandEvent&);
  void onBt6 (wxCommandEvent&);
  void onBt7 (wxCommandEvent&);
  void onBt8 (wxCommandEvent&);
  void onBt9 (wxCommandEvent&);
  void onBtSum (wxCommandEvent&);
  void onBtRes (wxCommandEvent&);
  void onBtDiv (wxCommandEvent&);
  void onBtMul (wxCommandEvent&);
  void onBtIgu (wxCommandEvent&);
  void onBtClo (wxCommandEvent&);
  void onBtBac (wxCommandEvent&);
  void onBtPun (wxCommandEvent&);

private:
  string x;
  string y;
  string z;
  int valor1;
  int valor2;
  double operandoo;
  double operandoo1;
  double resultadoo;
  int operando;
  int operando1;
  int op;
  int resultado;
  string operacion;
  int nClicks;
  int ban;	
  DECLARE_EVENT_TABLE()
};
