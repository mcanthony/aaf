# Microsoft Developer Studio Project File - Name="ComCutsTestAAF" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=ComCutsTestAAF - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "ComCutsTestAAF.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "ComCutsTestAAF.mak" CFG="ComCutsTestAAF - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "ComCutsTestAAF - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "ComCutsTestAAF - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "ComCutsTestAAF - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /MD /W3 /WX /GR /GX /O2 /I "..\..\..\include" /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_UNICODE" /D "UNICODE" /YX /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 ole32.lib uuid.lib aaf.lib aafiid.lib /nologo /subsystem:console /machine:I386 /nodefaultlib:"libc.lib" /nodefaultlib:"libcmt.lib" /nodefaultlib:"libcd.lib" /nodefaultlib:"libcmtd.lib" /nodefaultlib:"msvcrtd.lib" /out:"../../../Release/Examples/Com/ComCutsTestAAF.exe" /libpath:"..\..\..\lib"

!ELSEIF  "$(CFG)" == "ComCutsTestAAF - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /MDd /W3 /WX /GR /GX /ZI /Od /I "..\..\..\include" /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_UNICODE" /D "UNICODE" /D "OM_DEBUG" /YX /FD /c
# SUBTRACT CPP /Fr
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 aafd.lib aafiidd.lib ole32.lib uuid.lib /nologo /subsystem:console /debug /machine:I386 /nodefaultlib:"libc.lib libcmt.lib msvcrt.lib libcd.lib libcmtd.lib" /nodefaultlib:"libc.lib" /nodefaultlib:"libcmt.lib" /nodefaultlib:"msvcrt.lib" /nodefaultlib:"libcd.lib" /nodefaultlib:"libcmtd.lib" /out:"../../../Debug/Examples/Com/ComCutsTestAAF.exe" /pdbtype:sept /libpath:"..\..\..\lib"
# SUBTRACT LINK32 /incremental:no /map

!ENDIF 

# Begin Target

# Name "ComCutsTestAAF - Win32 Release"
# Name "ComCutsTestAAF - Win32 Debug"
# Begin Group "AAF Libraries"

# PROP Default_Filter "lib"
# Begin Source File

SOURCE=..\..\..\lib\AAF.lib

!IF  "$(CFG)" == "ComCutsTestAAF - Win32 Release"

!ELSEIF  "$(CFG)" == "ComCutsTestAAF - Win32 Debug"

# PROP Exclude_From_Build 1

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\..\..\lib\AAFD.lib

!IF  "$(CFG)" == "ComCutsTestAAF - Win32 Release"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "ComCutsTestAAF - Win32 Debug"

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\..\..\lib\AAFIID.lib

!IF  "$(CFG)" == "ComCutsTestAAF - Win32 Release"

!ELSEIF  "$(CFG)" == "ComCutsTestAAF - Win32 Debug"

# PROP Exclude_From_Build 1

!ENDIF 

# End Source File
# Begin Source File

SOURCE=..\..\..\lib\AAFIIDD.lib

!IF  "$(CFG)" == "ComCutsTestAAF - Win32 Release"

# PROP Exclude_From_Build 1

!ELSEIF  "$(CFG)" == "ComCutsTestAAF - Win32 Debug"

!ENDIF 

# End Source File
# End Group
# Begin Source File

SOURCE="..\..\..\..\examples\com-api\ComCutsOnlyTest\CutsOnlyExample.cpp"
# End Source File
# End Target
# End Project