object Form8: TForm8
  Left = 0
  Top = 0
  Caption = 'EMB Packet Reflector'
  ClientHeight = 424
  ClientWidth = 618
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object MemoDebug: TMemo
    Left = 360
    Top = 88
    Width = 185
    Height = 89
    Lines.Strings = (
      'MemoDebug')
    TabOrder = 0
  end
  object IdIPMCastClient1: TIdIPMCastClient
    Bindings = <>
    DefaultPort = 7003
    MulticastGroup = '239.5.50.40'
    ReuseSocket = rsTrue
    OnIPMCastRead = IdIPMCastClient1IPMCastRead
    Left = 248
    Top = 184
  end
end
