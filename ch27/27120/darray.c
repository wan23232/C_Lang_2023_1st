#include <stdio.h>
#include <stdlib.h>
int main(){
	int * myarray;
	int index;

	int size;

	printf("Size 를 입력하세요:");
	scanf("%d", &size);
	
	// 동적 할당이 필요함.
	
	myarray=malloc(sizeof(int)*size);

	for (index=0; index<size; index++){
		scanf("%d", &myarray[index]);
	}
	for (index=size-1; index>=0; index--){
		printf("%d\n", myarray[index]);
	}
	return 0;
}
