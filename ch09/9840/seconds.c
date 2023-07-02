#include <stdio.h>
int main ()
{
	int min; // 시간에서의 분을 의미함
	int sec; // 시간에서의 초를 의미함
	scanf("%d %d",&min, &sec);
	printf("%d \n",min*60+sec);
	return 0;
}
