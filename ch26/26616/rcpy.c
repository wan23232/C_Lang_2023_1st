#include <stdio.h>
void rstrcpy(char *c,char *o){
	char *e;	//오리지널 함수의 끝부분의 주소를 가리키는 포인터
	char num=0;
	for(e=o;*e!='\0';e++){
		num++;

	}
	e--;
	while(num>0){
		*c=*e;
		c++;
		e--;
		num--;
	}
	*c='\0';

}
int main(int ac, char *av[])
{
	char org[100];
	char cpy[100];
	scanf("%s",org);
	rstrcpy(cpy,org);
	printf("%s %s\n",org,cpy);
}
