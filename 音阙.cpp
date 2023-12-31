#include<graphics.h>
#include<windows.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")
int main(void)
{
	initgraph(539, 750);
	loadimage(0, _T("yy.jpg"));
	mciSendString(_T("play yyy.mp3 repeat"), 0, 0, 0);

	system("pause");
	closegraph();
	return 0;
}