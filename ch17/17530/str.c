#include <stdio.h>
int main()
{
	char org[100];
	char copy[100];
	int size=0;

	scanf("%s",org);

	for(int i=0;org[i]!=0;i++){
		size++;
	}
	for(int i=0;i<size;i++){
		copy[i]=org[i];
	}
	copy[size]='\0';

	printf("%s",copy);
}
