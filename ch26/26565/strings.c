#include <stdio.h>
int main(){
	char name[5][20] = { "apple", "banana", "kiwi", "melon", "orange" };
	char *ptr[5];

	for(int i=0;i<5;i++){
		ptr[i]=name[i];
	}

	for(int i=0;i<5;i++){
		printf("%s ",ptr[i]);
	}
	
	return 0;
}
