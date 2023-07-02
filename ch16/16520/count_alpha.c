#include <stdio.h>
int main()
{
	int count[26]={0};
	char c;

	for(;(c=getchar()) != EOF;){
		count[c -'a']++;
	}

	for (int n=0;n<26;n++){
		putchar('a'+n);
		printf(": %d",count[n]);
		printf("\n");
	}
}
