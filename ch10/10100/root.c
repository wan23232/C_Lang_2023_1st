#include <stdio.h>
#include <math.h>
int main()
{
	int a;
	int b;
	int c;
	double root_1;	// 이차방정식의 첫째 근임
	double root_2;	// 이차방정식의 두번째 근임

	scanf("%d %d %d",&a,&b,&c);

	root_1= (-b + sqrt(b*b - 4*a*c) ) / 2*a ;
	root_2= (-b - sqrt(b*b - 4*a*c) ) / 2*a ;

	printf("이차방정식의 첫 째 근은 %lf\n" "이차방정식의 두 째 근은 %lf\n",root_1,root_2);
	return 0;
}
