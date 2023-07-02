#include <stdio.h>
int main()
{
	int N;		//입력받을 정수 
	int negN;	//출력할 정수 

	scanf("%d",&N);

	if(N>0){
		negN=-N;
	}else{
		negN=N;
	}
	
	printf("%d\n",negN);
	return 0;
}
