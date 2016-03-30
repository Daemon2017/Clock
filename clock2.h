//---------------------------------------------------------------------------

#ifndef clock2H
#define clock2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include <GIFImg.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TTimer *Timer1;
	TImage *Image1;
	TImage *Image2;
	TTimer *Timer2;
	TImage *Image3;
	TTimer *Timer3;
	TImage *Image4;
	TTimer *Timer4;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Timer3Timer(TObject *Sender);
	void __fastcall _getch(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Timer4Timer(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
