#include <stdio.h>
int main()
{
	int n;

	n = getchar();

	while( n!=EOF ){
		putchar(n);
		n=getchar();
	}
	return 0;
}
