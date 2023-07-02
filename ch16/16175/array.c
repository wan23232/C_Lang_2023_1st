#include <stdio.h>
#define SIZE 10
int main()
{
	int data[SIZE];

	for(int n=0;n<SIZE;n++){
	scanf("%d",&data[n]);
	}
	for(int n=SIZE-1;n>=0;n--){
	printf("%d ",data[n]);
	}
}
