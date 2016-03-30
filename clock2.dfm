object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1040#1085#1072#1083#1086#1075#1086#1074#1099#1077' '#1095#1072#1089#1099
  ClientHeight = 200
  ClientWidth = 200
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnKeyDown = _getch
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 800
    Height = 800
    Transparent = True
  end
  object Image2: TImage
    Left = 0
    Top = 0
    Width = 800
    Height = 800
    Stretch = True
    Transparent = True
  end
  object Image3: TImage
    Left = 0
    Top = 0
    Width = 800
    Height = 800
    Transparent = True
  end
  object Image4: TImage
    Left = 0
    Top = 0
    Width = 800
    Height = 800
    Transparent = True
  end
  object Timer1: TTimer
    Interval = 250
    OnTimer = Timer1Timer
    Left = 216
    Top = 192
  end
  object Timer2: TTimer
    Interval = 250
    OnTimer = Timer2Timer
    Left = 216
    Top = 144
  end
  object Timer3: TTimer
    Interval = 250
    OnTimer = Timer3Timer
    Left = 216
    Top = 104
  end
  object Timer4: TTimer
    Interval = 250
    OnTimer = Timer4Timer
    Left = 256
    Top = 192
  end
end
