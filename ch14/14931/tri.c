#include <stdio.h>
int main()
{
	int n;	//입력받을정수
	int h;
	int w;
	int p;

	scanf("%d",&n);
	
	for( p=1 ; p<=n ; p++){
	for( h=1 ; h<=p ; h++){
		for( w=h; w>=1 ; w--){
			printf("%d ",w);

		}
		printf("\n");
	}
	printf("\n");
	}

	return 0;
}
