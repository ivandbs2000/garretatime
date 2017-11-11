#include <math.h>
#include <sstream>
#include "gridsizer.h"
#include <string.h>
#include <iostream>
using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);
 
  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Cls")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1017, wxT("Bck")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1016, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1007, wxT("7")), 0, wxEXPAND); 
  gs->Add(new wxButton(this, 1008, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1009, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1013, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1004, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1006, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1014, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1001, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1002, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1003, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1012, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1000, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1018, wxT(".")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1015, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 1011 , wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}

void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
	display->SetValue("");
}

void GridSizer::onBt0 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("0");
	if (nClicks==1)
		valor1 = 0;
	if (nClicks==2)
		valor2 = 0;
}

void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("1");
	if (nClicks==1)
		valor1 = 1;
	if (nClicks==2)
		valor2 = 1;
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("2");
	if (nClicks==1)
		valor1 = 2;
	if (nClicks==2)
		valor2 = 2;
}
void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("3");
	if (nClicks==1)
		valor1 = 3;
	if (nClicks==2)
		valor2 = 3;
}

void GridSizer::onBt4 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("4");
	if (nClicks==1)
		valor1 = 4;
	if (nClicks==2)
		valor2 = 4;
}

void GridSizer::onBt5 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("5");
	if (nClicks==1)
		valor1 = 5;
	if (nClicks==2)
		valor2 = 5;
}

void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("6");
	if (nClicks==1)
		valor1 = 6;
	if (nClicks==2)
		valor2 = 6;
}

void GridSizer::onBt7 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("7");
	if (nClicks==1)
		valor1 = 7;
	if (nClicks==2)
		valor2 = 7;
}

void GridSizer::onBt8 (wxCommandEvent& WXUNUSED (event)) {
	nClicks += 1;
	display->AppendText("8");
	if (nClicks==1)
		valor1 = 8;
	if (nClicks==2)
		valor2 = 8;
}

void GridSizer::onBt9 (wxCommandEvent& WXUNUSED (event)) {
	display->AppendText("9");
	nClicks += 1;
	if (nClicks==1)
		valor1 = 9;
	if (nClicks==2)
		valor2 = 9;
}

void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	x = (string)display->GetValue();
	if(ban == -1){
		operandoo = atof(x.c_str());
	}
	else{
		operando = atoi(x.c_str());
	}
	display->Clear();
	op = 1;
}

void GridSizer::onBtRes (wxCommandEvent& WXUNUSED (event)) {
	x = (string)display->GetValue();
	if(ban == -1){
		operando = atof(x.c_str());
	}
	else{
		operandoo = atoi(x.c_str());
	}
	display->Clear();
	op = 2;
}


void GridSizer::onBtDiv (wxCommandEvent& WXUNUSED (event)) {
	x = (string)display->GetValue();
	if(ban == -1){
		operandoo = atof(x.c_str());
	}
	else{
		operando = atoi(x.c_str());
	}
	display->Clear();
	op = 3;
}

void GridSizer::onBtMul (wxCommandEvent& WXUNUSED (event)) {
	x = (string)display->GetValue();
	if(ban == -1){
		operandoo = atof(x.c_str());
	}
	else{
		operando = atoi(x.c_str());
	}
	display->Clear();
	op = 4;
}
void GridSizer::onBtIgu (wxCommandEvent& WXUNUSED (event)) {
	y  = (string)display ->GetValue();
	operando1 =  atoi(y.c_str());
	display->SetValue("");
	if(ban == -1){
		operandoo1 =  atof(y.c_str());
		if(op == 1){
        		resultado = operandoo + operandoo1;
       		}
        	if(op == 2){
        		resultado = operandoo - operandoo1;
		}
		if(op == 3){
        		resultado = operandoo / operandoo1;
		}
		if(op == 4){
        		resultado = pow(operandoo, operandoo1);
		}
	}
	else{
		operando1 =  atoi(y.c_str());
		if(op == 1){
        		resultado = operando + operando1;
       		}
        	if(op == 2){
        		resultado = operando - operando1;
		}
		if(op == 3){
        		resultado = operando / operando1;
		}
		if(op == 4){
        		resultado = pow(operando, operando1);
		}
	}
	
	stringstream convert;
	string fin;
	convert<<resultado;
	fin = convert.str();
	display->SetValue(fin);
	ban = 0;
}
void GridSizer::onBtClo (wxCommandEvent& WXUNUSED (event)) {
	Destroy();
}
void GridSizer::onBtBac (wxCommandEvent& WXUNUSED (event)) {
	z = (string)display ->GetValue();
	if(z.size() > 0){
		z.erase(z.size() -1);
		display->SetValue(z);
	}
}
void GridSizer::onBtPun (wxCommandEvent& WXUNUSED (event)) {
	z = (string)display ->GetValue();
	ban = -1;
	if(z.size() == 0){
		display->AppendText("0");
		display->AppendText(".");
	}
	else{
		display->AppendText(".");
	}
}
BEGIN_EVENT_TABLE(GridSizer, wxFrame)
    EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(1000,  GridSizer::onBt0)
    EVT_BUTTON(1001,  GridSizer::onBt1)
    EVT_BUTTON(1002,  GridSizer::onBt2)
    EVT_BUTTON(1003,  GridSizer::onBt3)
    EVT_BUTTON(1004,  GridSizer::onBt4)
    EVT_BUTTON(1005,  GridSizer::onBt5)
    EVT_BUTTON(1006,  GridSizer::onBt6)
    EVT_BUTTON(1007,  GridSizer::onBt7)
    EVT_BUTTON(1008,  GridSizer::onBt8)
    EVT_BUTTON(1009,  GridSizer::onBt9)
    EVT_BUTTON(1011,  GridSizer::onBtSum)
    EVT_BUTTON(1012,  GridSizer::onBtRes)
    EVT_BUTTON(1013,  GridSizer::onBtDiv)
    EVT_BUTTON(1014,  GridSizer::onBtMul)
    EVT_BUTTON(1015,  GridSizer::onBtIgu)
    EVT_BUTTON(1016,  GridSizer::onBtClo)
    EVT_BUTTON(1017,  GridSizer::onBtBac)
    EVT_BUTTON(1018,  GridSizer::onBtPun)
      
END_EVENT_TABLE()
