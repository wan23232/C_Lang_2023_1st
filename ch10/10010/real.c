#include <stdio.h>
int main()
{
	int a;
	float f;
	double d;

	scanf("%d %f %lf",&a,&f,&d);
	printf("%d\t%.9f\t%.9lf\n",a,f,d);
}
