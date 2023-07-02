#include <stdio.h>
int main ()
{
	float c; //섭씨온도를 의미함.
	float f; //화씨온도를 의미함.

	scanf("%f",&c);
	f=9*c/5+32;
	printf("섭씨%f도는 화씨%f도입니다.\n",c,f);
	return 0;
}
