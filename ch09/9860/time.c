#include <stdio.h>
int main ()
{
	int sec;	//처음 기입하는 초를 의미함.
	scanf("%d",&sec);
	printf("%d시간 %d분 %d초 입니다.\n",sec/3600,sec%3600/60,sec%3600%60);
	return 0;
}
