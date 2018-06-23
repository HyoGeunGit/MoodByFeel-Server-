//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <MPlayer.hpp>
#include <ScktComp.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TServerSocket *ServerSocket1;
        TGroupBox *GroupBox1;
        TListBox *ListBox1;
        TGroupBox *GroupBox2;
        TMemo *Memo1;
        TEdit *Edit1;
        void __fastcall MediaPlayer1Click(TObject *Sender,
          TMPBtnType Button, bool &DoDefault);
        void __fastcall ServerSocket1ClientConnect(TObject *Sender,
          TCustomWinSocket *Socket);
        void __fastcall ServerSocket1ClientRead(TObject *Sender,
          TCustomWinSocket *Socket);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
