#include <stdio.h>
int main()
{
	int data[5];
	for(int i=0 ; i<5 ; i++){
		scanf("%d",&data[i]);
	}

	for(int i=0; i<5 ; i++){
		printf("%d ",data[i]);
	}
	printf("\n");
	for (int i=4 ; i>0 ; i--){
		data[i]=data[i-1];
	}

	for(int i=0; i<5 ; i++){
		printf("%d ",data[i]);
	}
}
