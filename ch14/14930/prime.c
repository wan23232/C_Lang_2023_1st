#include <stdio.h>
int main()
{
	int n;	//입력받을 정수
	int limit;
	int nameji;	//나머지


	scanf("%d",&n);

	if(n<=1){
		printf("\"해당없음\"\n");

	}else{
		for(limit=2;limit<=(n-1)||nameji!=0;limit++){
			nameji=(n%limit);
		}
	

		if(nameji==0){
			if(n==2){
				printf("\"소수\"\n");
			}else{
			printf("\"아님\"\n");
			}
		}else{
			printf("\"소수\"\n");
		}
	}
	

	
}
