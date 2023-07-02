#include <stdio.h>
void printStr(int length,char msg[]){
	for(int i=0;i<length;i++){
		putchar(msg[i]);
	}
}
 
int main()
{
    char  msg1[] = { 'H', 'e', 'l', 'l', 'o' };
    char  msg2[] = { 'M', 'J', 'U' };

    printStr(5, msg1);
    putchar('\n');
    printStr(3, msg2);
    putchar('\n');
}
