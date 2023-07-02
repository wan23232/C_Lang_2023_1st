#include <stdio.h>
int main ()
{
	int principal;	//원금을 의미함.
	int term;		//기간을 의미함.
	float interest_rate;	//연간 이자율을 의미함.
	int  total_interest;	//단리이자를 의미함.
	int total_money;		//총 원금을 의미함.

	printf("원금을 입력해주십시오:");
	scanf("%d",&principal);
	printf("기간(년)을 입력해주십시오:");
	scanf("%d",&term);
	printf("연간 이자율을 입력해주십시오:");
	scanf("%f",&interest_rate);

	total_interest=principal*term*interest_rate/100;	//단리 이자를 계산
	total_money=principal+total_interest;				//총 원금을 계산 

	printf("해당 기간동안의 총 원금은 %d원입니다.\n",total_money);
	return 0;

}
