object Form1: TForm1
  Left = 257
  Top = 127
  Width = 411
  Height = 466
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 50
    Top = 16
    Width = 279
    Height = 225
    Caption = 'Client IP'
    TabOrder = 0
    object ListBox1: TListBox
      Left = 40
      Top = 16
      Width = 201
      Height = 177
      ImeName = 'Microsoft IME 2010'
      ItemHeight = 13
      TabOrder = 0
    end
  end
  object GroupBox2: TGroupBox
    Left = 66
    Top = 248
    Width = 247
    Height = 97
    Caption = 'Entress Value'
    TabOrder = 1
    object Memo1: TMemo
      Left = 32
      Top = 24
      Width = 193
      Height = 65
      TabOrder = 0
    end
  end
  object Edit1: TEdit
    Left = 72
    Top = 368
    Width = 265
    Height = 21
    TabOrder = 2
    Text = 'Edit1'
  end
  object ServerSocket1: TServerSocket
    Active = True
    Port = 8000
    ServerType = stNonBlocking
    OnClientConnect = ServerSocket1ClientConnect
    OnClientRead = ServerSocket1ClientRead
    Left = 32
    Top = 328
  end
end
