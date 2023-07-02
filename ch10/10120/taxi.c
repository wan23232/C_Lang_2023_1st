#include <stdio.h>
int main ()
{
	int distance;	//거리(km)를 의미함.
	int time;		//사용 시간(분)을 의미함.
	int people;		//승객 수(명)을 의미함.
	int dis_fee;	//거리 금액을 의미함.
	int time_fee;	//시간 금액을 의미함.
	int peo_fee;	//승객 수 요금을 의미함.
	int all_fee;	//총 요금을 의미함.

	scanf("%d %d %d",&distance,&time,&people);

	dis_fee=distance*400;	//거리 요금 계산
	time_fee=time/10*500;	//시간 요금 계산
	peo_fee=(people-1)*dis_fee*0.05;		//승객 수 요금 계산
	all_fee=dis_fee+time_fee+peo_fee+2000;	//총 요금 계산 

	printf("거리요금은 %d원\n시간 요금은 %d원\n승객 수 요금은 %d원\n총 요금은 %d원입니다.\n",dis_fee,time_fee,peo_fee,all_fee);
	return 0;

}
