#include <stdio.h>
void str_copy(char *cp,char *org){
	while(*org!='\0'){
		*cp=*org;
		cp++;
		org++;
	}
}
int main(){
	char org[100];
	char cpy[100];
	scanf("%s", org);
	str_copy(cpy, org);
	printf("%s\n", cpy);
	return 0;
}
