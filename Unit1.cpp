//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <string.h>
#include "Unit1.h"
#include <fstream.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
struct tlist
{
 char word;
 tlist* next;
}*p,*head;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
Memo1->Lines->Clear();
Memo2->Lines->Clear();
Memo3->Lines->Clear();
Memo4->Lines->Clear();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AnalyzeClick(TObject *Sender)
{
ifstream tm;
tm.open("templates.txt");
char s[10];
if(!tm)
{ShowMessage("Файл не найден");
   return;}
else
 {
  for(int i=1;!tm.eof();i++)
   {
  tm >> s;
  Memo1->Lines->Add(s);
   }
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
AnsiString c="",s="",rigt="",falt;
for(int q=0;q<=Memo2->Lines->Count;q++)           //Заполнение AnsiString строками кода
{
s+=(AnsiString)Memo2->Lines->Strings[q]+' ';
}
for(int i=1;i<=s.Length();i++)
 {
  if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')     //идентификация+побуквенная заливка слова в переменную
              {
               c+=s[i];
              }
    else
    {
     if(c.Length()!=1){Memo3->Lines->Add(c);}         //вывод полученного слова в Мемо3
     c="";                                                                         //очистка переменной для нового слова
  }
for(int j=0;j<Memo3->Lines->Count;j++){if(Memo3->Lines->Strings[j]==""){Memo3->Lines->Delete(j);}}  //вычистка пробелов
 }
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
 for(int r=0;r<Memo3->Lines->Count;r++)
 {
   for(int t=0;t<Memo1->Lines->Count;t++)
   {
    if(Memo3->Lines->Strings[r]==Memo1->Lines->Strings[t])
    {
     rigt=Memo3->Lines->Strings[r];
    }
    else
    {
     falt=Memo3->Lines->Strings[r];
    }
   }
    if(rigt=="")
    {
     Memo4->Lines->Add(falt);
    }
   falt="";rigt="";
  }



}
//---------------------------------------------------------------------------



void __fastcall TForm1::N2Click(TObject *Sender)
{
Close();           
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N3Click(TObject *Sender)
{
ShowMessage("                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   Здравствуйте:D                                                                                                                                                                                                               ");
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button2Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::N4Click(TObject *Sender)
{
ShowMessage("Для корректной работы программы необходимо внести образцы ключевых слов в текстовый файл templates.txt, который находится в папке с программой. Фича с открытием файла из программы пока в разработке:)");
}
//---------------------------------------------------------------------------

