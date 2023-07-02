#include <stdio.h>
int mystrlen(char s[]){
	int size=0;
	for(int i=0;s[i]!=0;i++){
		size++;
	}
	return size;
}
int main()
{
	char str[100];
	int n;

	scanf("%s",str);

	n=mystrlen(str);

	printf("%d \n",n);




}
