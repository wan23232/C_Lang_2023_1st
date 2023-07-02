#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int numString;
	char buffer[100];
	char ** str;
	scanf("%d", &numString);
	
	str=(char**)malloc(numString*sizeof(char*));
	// 동적 할당 및 스트링 입력 저장
	for(int i=0;i<numString;i++){
		scanf("%s",buffer);
		str[i]=(char *)malloc(strlen(buffer)+1);
		strcpy(str[i],buffer);
	}
	for(int i=numString-1;i>=0;i--){
		printf("%s\n",str[i]);	
	}
	return 0;
}
