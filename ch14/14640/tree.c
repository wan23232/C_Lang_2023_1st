#include <stdio.h>
int main()
{
	int a;

	scanf("%d",&a);

	for (int size=1;size<=a;size++){
	for (int n=1; n<=size; n++){
		printf("%d ", n);
	}
	printf("\n");
	}

}
