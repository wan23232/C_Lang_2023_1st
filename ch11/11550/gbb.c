#include <stdio.h>
int main()
{
	int me;			//내가 낸 값을 저장할 정수
	int opponent;	//상대가 낸 값을 저장할 정수

	scanf("%d %d",&me,&opponent);

	if( me<0 || opponent<0 || me>2 || opponent>2 ){
		printf("오류\n");
	}else if( me==opponent ){
		printf("무\n");
	}else if ( me==0 && opponent==1 ){
		printf("패\n");
	}else if ( me==0 && opponent==2 ){
		printf("승\n");
	}else if ( me==1 && opponent==0 ){
		printf("승\n");
	}else if ( me==1 && opponent==2 ){
		printf("패\n");
	}else if ( me==2 && opponent==0 ){
		printf("패\n");
	}else{
		printf("승\n");
	}
	
	return 0;
}
