#include <stdio.h>
double c2f( double c ){
	double f;
	f=(c*1.8)+32;
	return f;

}
double f2c( double f ){
	double c;
	c=(f-32)/1.8;
	return c;

}
int main()
{
	double degree_f;
	double degree_c;
	double f;	//화->섭
	double c;	//섭->화

	scanf("%lf %lf",&degree_f,&degree_c);

	f=f2c(degree_f);
	c=c2f(degree_c);

	printf("%lf %lf",f,c);

}
