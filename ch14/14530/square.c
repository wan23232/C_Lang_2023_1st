#include <stdio.h>
int main()
{
	int n;	//입력받을 정수
	int w;
	int h;

	scanf("%d",&n);
	for( h=1; h<=n ; h++){
		for( w=1; w<=n ; w++){
			printf("%d ",w);

		}

		printf("\n");

	}
	return 0;
}
