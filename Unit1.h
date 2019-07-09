//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMemo *Memo1;
        TButton *Analyze;
        TLabel *Label1;
        TMemo *Memo2;
        TLabel *Label2;
        TButton *Button1;
        TMemo *Memo3;
        TLabel *Label3;
        TMemo *Memo4;
        TLabel *Label4;
        TLabel *Label5;
        TMainMenu *MainMenu1;
        TMenuItem *hfsdaa1;
        TMenuItem *N1;
        TMenuItem *N2;
        TMenuItem *N3;
        TButton *Button2;
        TMenuItem *N4;
        void __fastcall AnalyzeClick(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N3Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
