#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100];
	char str2[100];

	while( scanf("%s %s",str1,str2)==2){
		if(strcmp(str1,str2)>0){
			printf("%s",str2);
		}else{
			printf("%s",str1);
		}
		break;

	}
}
