#include <stdio.h>
int main ()
{
	int hour;	//시간을 의미함
	int min;	//분을 의미함
	int sec;	//초를 의미함
	scanf("%d %d %d",&hour ,&min, &sec);
	printf("%d초 입니다.\n",hour*3600+min*60+sec);
	return 0;
}
