#pragma comment(lib,"user32.lib")
#include <stdlib.h>
#include <windows.h>

int main()
{
	while(1)
	{
		system("sc.exe queryex bits");
		system("sc.exe stop bits");
		system("sc.exe queryex dosvc");
		system("sc.exe stop dosvc");
		Sleep(1000);
	}
	return 0;
}
