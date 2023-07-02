#include <stdio.h>
int main ()
{
	int v1; //1번째 정수
	int v2; //2번째 정수
	int v3; //3번째 정수
	int v4; //4번째 정수
	int v5; //5번째 정수

	scanf("%d",&v1);
	printf("합계는 %d입니다.\n",v1);
	scanf("%d",&v2);
	printf("합계는 %d입니다.\n",v1+v2);
	scanf("%d",&v3);
	printf("합계는 %d입니다.\n",v1+v2+v3);
	scanf("%d",&v4);
	printf("합계는 %d입니다.\n",v1+v2+v3+v4);
	scanf("%d",&v5);
	printf("합계는 %d입니다.\n종료합니다. \n",v1+v2+v3+v4+v5);
	return 0;

}
