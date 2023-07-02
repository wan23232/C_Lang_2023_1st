#include <stdio.h>
void printString(char *s){

	while(*s!=0){
		putchar(*s);
		s++;
	}
	return;
}

int main(){
	char buf[80];
	scanf("%s", buf);
	printString(buf);
	return 0;
}
