@echo off
setlocal enabledelayedexpansion

echo Compiling all .cpp files in %cd% ...

REM Loop through every .cpp file in the current folder
for %%f in (*.cpp) do (
    set "filename=%%~nf"
    echo -------------------------------
    echo Compiling %%f into !filename!.exe ...
    g++ "%%f" -o "!filename!.exe"

    if exist "!filename!.exe" (
        echo Running !filename!.exe ...
        "!filename!.exe"
    ) else (
        echo Failed to compile %%f
    )
)

echo -------------------------------
echo All .cpp files processed.
endlocal
