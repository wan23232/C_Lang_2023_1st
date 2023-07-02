#include <stdio.h>
int main()
{
	int n;	//입력받을 2이상 자연수
	int limit;

	scanf("%d",&n);

	if(n<=1){
		printf("해당없음\n");
	}else{

	for(limit=2;n%limit!=0;limit++){
		if(n%limit==0){
			break;
		}
	}
	if(limit==n){
		printf("소수\n");
	}else if(n==2){
		printf("소수\n");
	}else{
		printf("아님\n");
	}
	}
	return 0;
}
