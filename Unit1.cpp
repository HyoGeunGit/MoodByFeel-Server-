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
        ListBox1->Items->Add(Socket->RemoteAddress);         //��ȣ �ȿ� �ִ� Socket->RemoteAddress�� �̴���� IP �� ������ �� �ִ�.
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ServerSocket1ClientRead(TObject *Sender,
      TCustomWinSocket *Socket)
{
        memo[1]="����! �����ؿ�!";
         memo[2]="����� �⻵���̴� ���� �⻵��!";
         memo[3]="�����ؿ�!";
         memo[4]="���� ��û �������� �����̱���?";
         memo[5]="������ ������!";
         memo[6]="�����ε� �̷��ϸ� ��ӵǱ�!!";
         memo[7]="��������׿�";
         memo[8]="�մ� ��";
         memo[9]="�� �������� ����";
         memo[10]="�������ƿ�ˤ�!";
         memo[11]="�����ε� �̷��Ը� ���õ��!!";
         memo[12]="�����!";
         memo[13]="�ʹ����ؼ� Ī���ϱ⵵ ������;;";
         memo[14]="�ѵ�ƾ�!";       //������� ��ܶ� ����
         memo[15]="�����ƿ� �Ф� ������ �� �����ſ���";
         memo[16]="�� ������!";
         memo[17]="�� �� ���־�! ";
         memo[18]="������ȸ�� ���������!";
         memo[19]="�󱼿� �ٽ��� �����ؿ� �Ф� ����� ��";
         memo[20]="������!";
         memo[21]="�����������!";
         memo[22]="�ٽ� ������ �����!";
         memo[23]="�ٽɵ��� ��ó�׿�!";
         memo[24]="������ �׷����ΰſ���... ������ �� �ߵɲ�����";
         memo[25]="������!"+k;
         memo[26]="�� �� �� �־� ��� ���� �ٰԿ�";
         memo[27]="������ �����!";
         memo[28]="���ۿ�......";
         memo[29]="��������....���� �������ݾƿ�?";
         memo[30]="��� �����ﲨ����??! ��������!!";
         memo[31]="�� ���.... ������...";
         memo[32]="�Ф� ���Ŵϴ�....";
         memo[33]="�Ф�.....";
         memo[34]="������ �� ���ϸ�ǿ�! �� ���";                      //������� ���ö�����
         memo[35]="��....õõ�� ��ȣ��.... ��...��..";
         memo[36]="�׻���? �� ����";
         memo[37]="���ƿ� ���ƿ�.... �������� ���ָ԰Ÿ��� �ȵǴϱ� ����";
         memo[38]="�����ʿ������! �Ͷ߷���!";
         memo[39]="���� �ν�������!";
         memo[40]="���������� ������@��";
         memo[41]="�̹��� �������� ����";
         memo[42]="�� ���� ���ƿ�����";
         memo[43]="�� ����ġ�� ����";
         memo[44]="�׿�������ʹ�";
         memo[45]="�� ��¥ ����ġ��";                                       //������� ȭ���� ����

        // 1~14=��� 15~~34=���� 35~45=�г�
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
        ListBox1->Items->Add(Socket->RemoteAddress);         //��ȣ �ȿ� �ִ� Socket->RemoteAddress�� �̴���� IP �� ������ �� �ִ�.

        for(int j=0;j<ListBox1->Items->Count;j++)       //��ü����
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
        ListBox1->Items->Add(Socket->RemoteAddress);         //��ȣ �ȿ� �ִ� Socket->RemoteAddress�� �̴���� IP �� ������ �� �ִ�.

        for(int j=0;j<ListBox1->Items->Count;j++)       //��ü����
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
        ListBox1->Items->Add(Socket->RemoteAddress);         //��ȣ �ȿ� �ִ� Socket->RemoteAddress�� �̴���� IP �� ������ �� �ִ�.

        for(int j=0;j<ListBox1->Items->Count;j++)       //��ü����
        {
        ServerSocket1->Socket->Connections[j]->SendText(memo[k]);
        }

        }
}
//---------------------------------------------------------------------------
