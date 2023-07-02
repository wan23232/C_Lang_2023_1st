#include <stdio.h>
void printLine(char str[]){
	// 문자 수로 반복하지 않고 문자가 0 인지로 판별한다.
	// 맨 뒤에 줄바꿈을 putchar로 출력한다.
	for(int n=0;str[n]!=0;n++){
		putchar(str[n]);
		
	}
	putchar('\n');
}

int  main(){
	char msg1[] = { 'H', 'e', 'l', 'l', 'o', 0 };
	char msg2[] = { 'M', 'J', 'U', 0 };
	printLine(msg1);
	printLine(msg2);
	return 0;
}
