#include <stdio.h>
int main()
{
	int n=1;
	int diff=1;
	int difff=1;

	while(n<=30){
		printf("%d ",n);
		n+=diff;
		diff+=difff;
		difff++;

	}
}
