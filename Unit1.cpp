//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{



}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	  Image1->Canvas->Brush->Color = clTeal;
	  Image1->Canvas->Ellipse(100, 50, 165, 130);// head

	  Image1->Canvas->Brush->Color = clTeal;
	  Image1->Canvas->Ellipse(20, 140, 140, 190); //hands
	  Image1->Canvas->Ellipse(130, 140, 250, 190);

	  Image1->Canvas->Ellipse(60, 300, 120, 340); //legs
	  Image1->Canvas->Ellipse(150, 300, 210, 340);
	  Image1->Canvas->Brush->Color = clGreen;
	  Image1->Canvas->Ellipse(60, 120, 210, 320);//body


}
//---------------------------------------------------------------------------
