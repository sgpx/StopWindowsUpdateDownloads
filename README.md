# StopWindowsUpdateDownloads

Stop Windows Update from hogging your bandwidth and messing up your network speed. Available as a batch file and as a Visual C program.

Basically runs an infinite loop and stops Windows Delivery Optimization Service and Windows Background Intelligent Transfer Service using Microsoft's Service Configuration tool `sc.exe`.

# How to use

- Batch File: Run as administrator directly. Or just start a command prompt as administrator and run it from there.

- C file: Compile to EXE with Visual Studio or VS Command Line Build Tools or Mingw-w64. Then run as administrator.

# How to compile with VS Build Tools

Activate `VsDevCmd.bat`, usually located in `C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\Tools\VsDevCmd.bat`.

```
git clone https://github.com/sgpx/StopWindowsUpdateDownloads swu
cd swu
"C:\Program Files (x86)\Microsoft Visual Studio\2019\BuildTools\Common7\Tools\VsDevCmd.bat"
cl /EHsc stop-windows-update-downloads.c /o swu.exe
swu.exe
```


