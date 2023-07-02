#include <stdio.h>
int main()
{
	int w;
	int width;
	int height;
	int h;

	scanf("%d %d",&width, &height);

	for( h=1 ; h<=height ; h++){
		for( w=1 ; w<=width ; w++){
			printf("%d ",w);

		}
		printf("\n");
	}

}
