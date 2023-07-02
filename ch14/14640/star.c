#include <stdio.h>
int main()
{
	int width ;
	int height ;

	scanf("%d %d", &width, &height);
	
	for ( int h=1; h<=height; h++){
	for ( int w=1; w<=width; w++){
		printf("*");

	}
	printf("\n");
	}
}
