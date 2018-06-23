//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
 int random_integer;
 int lowest = 0, highest = 0;
 int range = (highest - lowest) + 1;
 int index=0;
 int k;
 String memo[50];
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MediaPlayer1Click(TObject *Sender,
      TMPBtnType Button, bool &DoDefault)
{
       // MediaPlayer1->FileName=""
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ServerSocket1ClientConnect(TObject *Sender,
      TCustomWinSocket *Socket)
{
        ListBox1->Items->Add(Socket->RemoteAddress);         //괄호 안에 있는 Socket->RemoteAddress은 싱대방의 IP 를 가져올 수 있다.
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
        memo[1]="오옷! 축하해요!";
         memo[2]="당신이 기뻐보이니 저도 기뻐요!";
         memo[3]="굉장해요!";
         memo[4]="오늘 엄청 좋은일이 있으셨군요?";
         memo[5]="오오오 멋져요!";
         memo[6]="앞으로도 이런일만 계속되길!!";
         memo[7]="쓰무쓰허네요";
         memo[8]="쌌다 ㄷ";
         memo[9]="와 개멋지다 ㄹㅇ";
         memo[10]="완전좋아요옹ㅅ!";
         memo[11]="앞으로도 이렇게만 갑시드아!!";
         memo[12]="가즈아!";
         memo[13]="너무잘해서 칭찬하기도 귀찮네;;";
         memo[14]="싼드아앗!";       //여기까지 기쁠때 문구
         memo[15]="괜찮아요 ㅠㅠ 다음엔 더 좋을거에요";
         memo[16]="힘 내세요!";
         memo[17]="넌 할 수있어! ";
         memo[18]="다음기회를 노려보세요!";
         memo[19]="얼굴에 근심이 가득해요 ㅠㅠ 웃어요 ㅠ";
         memo[20]="힘내라!";
         memo[21]="힘내보세요옷!";
         memo[22]="다시 힘내서 가즈아!";
         memo[23]="근심따윈 떨처네요!";
         memo[24]="오늘은 그런날인거에요... 다음엔 더 잘될꺼에여";
         memo[25]="힘내라!"+k;
         memo[26]="넌 할 수 있어 라고 말해 줄게요";
         memo[27]="힘내서 가즈아!";
         memo[28]="슬퍼요......";
         memo[29]="울지마요....제가 옆에있잖아요?";
         memo[30]="울면 저도울꺼에요??! 울지마요!!";
         memo[31]="얼굴 펴요.... 힘내요...";
         memo[32]="ㅠㅠ 슬픕니다....";
         memo[33]="ㅠㅠ.....";
         memo[34]="앞으로 더 잘하면되여! 얼굴 펴요";                      //여기까지 슬플때문구
         memo[35]="자....천천히 심호흡.... 후...하..";
         memo[36]="죽빵각? 각 ㅇㅇ";
         memo[37]="참아요 참아요.... 저런놈은 한주먹거리도 안되니까 ㅇㅇ";
         memo[38]="참을필요업서욧! 터뜨려요!";
         memo[39]="가서 부숴버려요!";
         memo[40]="없에버려요 저런새@끼";
         memo[41]="이번만 참아주죠 ㄹㅇ";
         memo[42]="와 ㄹㅇ 참아요참아";
         memo[43]="아 개빡치네 ㄹㅇ";
         memo[44]="죽여버리고싶다";
         memo[45]="와 진짜 개빡치네";                                       //여기까지 화날때 문구

        // 1~14=기쁨 15~~34=슬픔 35~45=분노
        if (Socket->ReceiveText()==1)
        {
                ShowMessage("Sad");
                Memo1->Lines->Add("Sad");
                srand((unsigned)time(0));
                lowest = 1, highest = 14;
                 for (index = 0; index < 20; index++) {
                  random_integer = lowest + int(range*rand() / (RAND_MAX + 1.0));
                  }
                 k=random_integer;
                 Edit1->Text=memo[k];
        ListBox1->Items->Add(Socket->RemoteAddress);         //괄호 안에 있는 Socket->RemoteAddress은 싱대방의 IP 를 가져올 수 있다.

        for(int j=0;j<ListBox1->Items->Count;j++)       //전체전송
        {
        ServerSocket1->Socket->Connections[j]->SendText(memo[k]);
        }

        }
   //

        if (Socket->ReceiveText()==2)
        {
                ShowMessage("Happy");
                Memo1->Lines->Add("Happy");
                                srand((unsigned)time(0));
                lowest = 15, highest = 34;
                 for (index = 0; index < 20; index++) {
                  random_integer = lowest + int(range*rand() / (RAND_MAX + 1.0));
                  }
                 k=random_integer;
                 Edit1->Text=memo[k];
        ListBox1->Items->Add(Socket->RemoteAddress);         //괄호 안에 있는 Socket->RemoteAddress은 싱대방의 IP 를 가져올 수 있다.

        for(int j=0;j<ListBox1->Items->Count;j++)       //전체전송
        {
        ServerSocket1->Socket->Connections[j]->SendText(memo[k]);
        }

        }

   //
        if (Socket->ReceiveText()==3)
        {
                ShowMessage("Angry");
                Memo1->Lines->Add("Angry");
                                srand((unsigned)time(0));
                lowest = 35, highest = 45;
                 for (index = 0; index < 20; index++) {
                  random_integer = lowest + int(range*rand() / (RAND_MAX + 1.0));
                  }
                 k=random_integer;
                 Edit1->Text=memo[k];
        ListBox1->Items->Add(Socket->RemoteAddress);         //괄호 안에 있는 Socket->RemoteAddress은 싱대방의 IP 를 가져올 수 있다.

        for(int j=0;j<ListBox1->Items->Count;j++)       //전체전송
        {
        ServerSocket1->Socket->Connections[j]->SendText(memo[k]);
        }

        }
}
//---------------------------------------------------------------------------
