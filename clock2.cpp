//---------------------------------------------------------------------------

#include <vcl.h>
#include <cmath>
#include <Math.hpp>
#include <DateUtils.hpp>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#pragma hdrstop

#include "clock2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
float sFi,mFi,hFi;
int sr=70,mr=60,hr=50,pr=70,sx,sy,mx,my,hx,hy,px,py;
TPoint O(100,100);
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
Image2->Canvas->Brush->Color=clBtnFace;
Image2->Canvas->FillRect(Image2->ClientRect);
sFi=90-360/60.*SecondOf(Time());
sx= O.x+ sr*std::cos(DegToRad(sFi));
sy= O.y+ -sr*std::sin(DegToRad(sFi));
Image2->Canvas->MoveTo(O.x,O.y);
Image2->Canvas->Pen->Color=clRed;
Image2->Canvas->Pen->Width=1;
Image2->Canvas->LineTo(sx,sy);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
Image3->Canvas->Brush->Color=clBtnFace;
Image3->Canvas->FillRect(Image3->ClientRect);
mFi=90-360/60.*MinuteOf(Time())-1/60.*SecondOf(Time())*6;
mx= O.x+ mr*std::cos(DegToRad(mFi));
my= O.y+ -mr*std::sin(DegToRad(mFi));
Image3->Canvas->MoveTo(O.x,O.y);
Image3->Canvas->Pen->Color=clBlue;
Image3->Canvas->Pen->Width=3;
Image3->Canvas->LineTo(mx,my);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer3Timer(TObject *Sender)
{
Image4->Canvas->Brush->Color=clBtnFace;
Image4->Canvas->FillRect(Image4->ClientRect);
hFi=90-360/12.*HourOf(Time())-(1/12.*MinuteOf(Time()))*6;
hx= O.x+ hr*std::cos(DegToRad(hFi));
hy= O.y+ -hr*std::sin(DegToRad(hFi));
Image4->Canvas->MoveTo(O.x,O.y);
Image4->Canvas->Pen->Color=clGreen;
Image4->Canvas->Pen->Width=5;
Image4->Canvas->LineTo(hx,hy);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::_getch(TObject *Sender, WORD &Key, TShiftState Shift)
{

GetAsyncKeyState(VK_UP);
if(GetAsyncKeyState(VK_UP))
{
O.y=O.y-20;
Form1->Height=Height-20;
Image1->Canvas->FillRect(Image1->ClientRect);
}

GetAsyncKeyState(VK_LEFT);
if(GetAsyncKeyState(VK_LEFT))
{
O.x=O.x-20;
Form1->Width=Width-20;
Image1->Canvas->FillRect(Image1->ClientRect);
}

GetAsyncKeyState(VK_DOWN);
if(GetAsyncKeyState(VK_DOWN))
{
O.y=O.y+20;
Form1->Height=Height+20;
Image1->Canvas->FillRect(Image1->ClientRect);
}

GetAsyncKeyState(VK_RIGHT);
if(GetAsyncKeyState(VK_RIGHT))
{
O.x=O.x+20;
Form1->Width=Width+20;
Image1->Canvas->FillRect(Image1->ClientRect);
}

GetAsyncKeyState(VK_OEM_MINUS);
if(GetAsyncKeyState(VK_OEM_MINUS))
{
Form1->Width=Width-70;
Form1->Height=Height-70;
sr=sr-20;
mr=mr-20;
hr=hr-20;
pr=pr-20;
O.y=O.y-50;
O.x=O.x-50;
Image1->Canvas->FillRect(Image1->ClientRect);
Image1->Canvas->Brush->Color=clBtnFace;
}

GetAsyncKeyState(VK_OEM_PLUS);
if(GetAsyncKeyState(VK_OEM_PLUS))
{
Form1->Width=Width+70;
Form1->Height=Height+70;
sr=sr+20;
mr=mr+20;
hr=hr+20;
pr=pr+20;
O.y=O.y+50;
O.x=O.x+50;
Image1->Canvas->FillRect(Image1->ClientRect);
Image1->Canvas->Brush->Color=clBtnFace;
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer4Timer(TObject *Sender)
{
   for (double blat=0; blat<12; blat++)
   {
px= O.x+ pr*std::cos(DegToRad(30*blat));
py= O.y+ pr*std::sin(DegToRad(30*blat));
Image1->Canvas->MoveTo(px,py);
px= O.x+ (pr-10)*std::cos(DegToRad(30*blat));
py= O.y+ (pr-10)*std::sin(DegToRad(30*blat));
Image1->Canvas->Pen->Color=clBlack;
Image1->Canvas->Pen->Width=1;
Image1->Canvas->LineTo(px,py);
   }

   for (double blat2=0; blat2<60; blat2++)
   {
px= O.x+ pr*std::cos(DegToRad(6*blat2));
py= O.y+ pr*std::sin(DegToRad(6*blat2));
Image1->Canvas->MoveTo(px,py);
px= O.x+ (pr-5)*std::cos(DegToRad(6*blat2));
py= O.y+ (pr-5)*std::sin(DegToRad(6*blat2));
Image1->Canvas->Pen->Color=clBlack;
Image1->Canvas->Pen->Width=1;
Image1->Canvas->LineTo(px,py);
   }
}
//---------------------------------------------------------------------------
