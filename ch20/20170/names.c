#include <stdio.h>
#define LEN_NAME 21
#define MAX_PEOP 30
int main()
{
	char name[MAX_PEOP][LEN_NAME];
	int count=0;

	for(int i=0;scanf("%s",name[i])==1;i++){
		count++;
	}

	for(int i=count;i>=0;i--){
		printf("%s\n",name[i]);
	
	}

	return 0;

}
