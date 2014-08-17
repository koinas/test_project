
#include <windows.h>
#include <iostream>

VOID CALLBACK TimerProc(
  __in  HWND hwnd,
  __in  UINT uMsg,
  __in  UINT_PTR idEvent,
  __in  DWORD dwTime
);
#include "math.h"
int main(void)
{
	double a = 0.1;
	double b = 0.1;
	if(cos(a)!=cos(b)) 
	Sleep(1);

	SetTimer(0,0,500,TimerProc);
	MSG msg;
	while(1)
	{
		if(PeekMessage(&msg,0,0,0,TRUE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}
	//std::cout<<"hello";
}


VOID CALLBACK TimerProc(
  __in  HWND hwnd,
  __in  UINT uMsg,
  __in  UINT_PTR idEvent,
  __in  DWORD dwTime
)
{
	std::cout<<"TIMER\n";
}