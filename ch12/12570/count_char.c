#include <stdio.h>
int main()
{
	int n;
	int letter;

	letter=0;

	while( 1==1 ){
		if((n=getchar()==EOF)){
			break;
		}
		letter++;

	}

	printf("%d\n",letter);

	return 0;

}
