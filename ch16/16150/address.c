#include <stdio.h>
int main()
{
	int A[10];
	
	printf("A의 주소\n");
	for(int i=0;i<10;i++){
		printf("%p\t",&A[i]);
	}

	printf("\n");

	char B[10];
	printf("B의 주소\n");
	for(int i=0;i<10;i++){
		printf("%p\t",&B[i]);
	}

	printf("\n");

	return 0;
}
