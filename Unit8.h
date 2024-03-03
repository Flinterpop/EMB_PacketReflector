//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdIPMCastBase.hpp>
#include <IdIPMCastClient.hpp>
#include <IdUDPBase.hpp>
#include <IdUDPClient.hpp>
#include <IdGlobal.hpp>
#include <IdSocketHandle.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TIdIPMCastClient *IdIPMCastClient1;
	TMemo *MemoDebug;
	void __fastcall IdIPMCastClient1IPMCastRead(TObject *Sender, const TIdBytes AData,
          TIdSocketHandle *ABinding);
private:	// User declarations
public:		// User declarations

	void  pme(const char* fmt, ...);


	__fastcall TForm8(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
