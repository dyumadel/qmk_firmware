@echo off
echo Building TH40 firmware...
echo.

REM MSYS2 환경 설정
set MSYSTEM=MINGW64
set MSYS2_PATH_TYPE=inherit
set CHERE_INVOKING=1

REM QMK 빌드
C:\QMK_MSYS\usr\bin\bash.exe --login -c "cd /f/source/dyumadel/qmk_firmware && qmk compile -kb epomaker/th40 -km default"

echo.
if %ERRORLEVEL% EQU 0 (
    echo BUILD SUCCESS!
) else (
    echo BUILD FAILED!
)
pause