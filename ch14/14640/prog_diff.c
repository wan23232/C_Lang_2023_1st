#include <stdio.h>
int main()
{
	int n;
	n=1;
	int diff;
	diff=1;
	int last = 1;

	while ( n <= 100 ){
		printf("%d\n( 차 : %d )\n",n,n-last);
		last = n;
		n += diff;		//= n=n+1
		diff ++;
	}

	return 0;

}
