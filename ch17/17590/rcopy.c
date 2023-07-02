#include <stdio.h>
void rcpy(char d[],char d2[]){
	int i=0;
	int size=0;
	for(int n=0;d[n]!=0;n++){
		size++;
	}
	for(;d[i]!=0;i++){
		d2[size-(i+1)]=d[i];
	}
	d2[size]='\0';
}
int main()
{
	char str1[80]={0};
	char str2[80];
	
	scanf("%s",str1);

	rcpy(str1,str2);

	printf("원스트링:%s, 뒤집힌스트링:%s \n",str1,str2);
}
