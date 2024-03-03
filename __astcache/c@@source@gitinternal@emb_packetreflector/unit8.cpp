//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
	pme("Starting");
	pme("Listening on %s : %d",IdIPMCastClient1->MulticastGroup.c_str(), IdIPMCastClient1->DefaultPort);
	IdIPMCastClient1->Active=true;

}
//---------------------------------------------------------------------------
void __fastcall TForm8::IdIPMCastClient1IPMCastRead(TObject *Sender, const TIdBytes AData,
          TIdSocketHandle *ABinding)
{
	 pme("Rx packet size: %d",AData.size());



	const char *Host = "192.168.1.121";
	int Port = 6969;
	TIdUDPClient *IdUDPClientNMEA = new TIdUDPClient(NULL);
	IdUDPClientNMEA->SendBuffer(Host,Port,AData);


}
//---------------------------------------------------------------------------


//this is a printf for the Debug Memo widget
void  TForm8::pme(const char* fmt, ...)
{
	//Check length and clear after 1000 lines
	if (MemoDebug->Lines->Count > 1000) MemoDebug->Lines->Clear();

	va_list args;
	va_start(args, fmt);
	char buf[200];
	vsprintf(buf,fmt,args);
	MemoDebug->Lines->Add(buf);
	va_end(args);

	//scroll to bottom of text
	MemoDebug->SelStart = MemoDebug->Lines->Text.Length();
	MemoDebug->SelLength = 1;
	MemoDebug->ClearSelection();
}

