#include <stdio.h>
int main()
{
	int num;	//표준입력받을 정수

	scanf("%d",&num);

	if( num>=100 ){
		if( num<1000 ){
			printf("YES\n");
		}else{
			printf("NO\n");
		}

	}else{
		printf("NO\n");

	}
	
	return 0;
}
