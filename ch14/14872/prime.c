#include <stdio.h>
int main()
{
	int N;	//입력받을 자연수 N
	int nameji;	//나머지
	int limit;
	int count;


	nameji=1;
	limit = 2;
	N=0;
	count=0;

	scanf("%d",&N);

	if(N<=1){
		printf("해당없음\n");

	}else{

	while(nameji!=0){
		nameji = N % limit;
		limit++;
		count++;
	}

	if(count<(N-1)){
		if(N==2){
			printf("소수\n");
		}else{
		printf("아님\n");
		}
	}else{
		printf("소수\n");
	}
	}
	return 0;
}
