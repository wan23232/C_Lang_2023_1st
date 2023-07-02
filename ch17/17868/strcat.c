#include <stdio.h>
void mystrcat(char s[],char s2[]){
	int size=0;
	int i=0;
	for(int n=0;s[n]!=0;n++){
		size++;
	}
	for(;s2[i]!=0;i++){
		s[size+i]=s2[i];
	}
	s[size+i]='\0';
}
int main()
{
	char str1[100];
	char str2[100];

	scanf("%s %s",str1,str2);

	mystrcat(str1,str2);

	printf("%s\n",str1);
}
