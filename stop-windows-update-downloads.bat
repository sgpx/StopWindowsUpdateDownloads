echo off
cls
goto p1

:p1
sc.exe queryex dosvc
sc.exe stop dosvc
goto p2

:p2
sc.exe queryex bits
sc.exe stop bits
goto p1