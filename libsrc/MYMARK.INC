!ABCIncludeFile

OMIT('_EndOfInclude_',_MarkPresent_)
_MarkPresent_ EQUATE(1)


! ������� ��� �������� ���������� �������
Table_Mark    Queue,TYPE
Ptr_Marked    String(512)
              .

! ����� ��� �������� � �������� ���������� ������� � Browse

MarkClass       Class,Module('MyMark.clw'),TYPE,LINK('MyMark.CLW',_ABCLinkMode_),DLL(_ABCDllMode_)
Ref_Marked      &Table_Mark
Init            Procedure()
Kill            Procedure()
AddMark         Procedure(String MarkValue),byte,proc,virtual
DeleteMark      Procedure(String MarkValue),byte,proc,virtual
AddDeleteMark   Procedure(String MarkValue)
CheckMark       Function(String MarkValue),byte
ClearMark       Procedure(),virtual
HowManyMark     Function(),long
              .

_EndOfInclude_
