#include <stdio.h>
#include <ctype.h>
int main()
{
	int n;

	n=getchar();

	if(islower(n)){
		n=n-32;
		putchar(n);
	}else if(isupper(n)){
		n=n+32;
		putchar(n);
	}else{
		putchar(n);
	}

	return 0;



}
