#include <stdio.h>
int main()
{
	int n;		//입력받을 정수
	int limit;
	int sum;

	scanf("%d",&n);

	if( n>0){
	for ( limit=1 ; limit<=(n-1) ; limit++ ){
		printf("%d ",limit*limit);
		printf("+ ");
		sum += limit*limit;

	}
	}else{						//n의 음수의 정수일때, n부터 1까지 제곱의 합임.
		for ( limit=1 ; limit>=(n+1) ; n++){
			printf("%d ",n*n);
			printf("+ ");
			sum += n*n;
		}
	}

	printf("%d = %d\n",n*n,sum+(n*n));
}
