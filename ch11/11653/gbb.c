#include <stdio.h>
#define GAWI 0		//가위
#define BAWI 1		//바위
#define BO 	 2		//보
int main()
{
	int my_hand;		//내가 낸 
	int your_hand;		//상대방의 손.

	scanf("%d %d",&my_hand, &your_hand);

	if( my_hand<0 || your_hand<0 || my_hand > 2 || your_hand > 2){
		printf("오류\n");
	}else if( my_hand == your_hand ) {
		printf("무\n");
	}else if(( my_hand + 1) % 3 == your_hand ){
		printf("패\n");
	}else{
		printf("승\n");

	}
	

	return 0;
}
