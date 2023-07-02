#include <stdio.h>
int main ()
{
	double a;	//첫 번째 실수
	double b;	//두 번째 실수
	double arithmetic;	//두 실수의 산술평균
	double harmonic;	//두 실수의 조화평균

	scanf("%lf %lf",&a,&b);
	arithmetic=(a+b)/2;
	harmonic=2*a*b/(a+b);
	printf("두 실수의 산술평균은 %lf입니다.\n두 실수의 조화평균은 %lf입니다.\n",arithmetic,harmonic);
	return 0;

}
