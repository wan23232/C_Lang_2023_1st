#include <stdio.h>
int main ()
{
	double diameter;	//원의 지름
	double area;		//원의 면적

	scanf("%lf",&diameter);
	
	area=diameter/2*diameter/2*3.14;
	
	printf("원의 면적은 %lf입니다.\n",area);
	return 0;
}
