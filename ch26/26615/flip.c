#include <stdio.h>
void flip(char *d){
	char *t;	//맨 뒷번째 주소를 포인팅하는 포인터
	for(t=d;*t!='\0';t++){
		//
	}
	t--;
	while(d<t){
		char temp;
		temp=*d;
		*d=*t;
		*t=temp;
		t--;
		d++;
	}
}
int main(int ac, char *av[])
{
	char str[100];

	scanf("%s",str);
	flip(str);
	printf("%s\n",str);
}
