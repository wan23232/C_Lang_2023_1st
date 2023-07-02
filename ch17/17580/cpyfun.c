#include <stdio.h>
void mystrcpy(char d[],char d2[]){
	int i=0;
	for(;d[i]!=0;i++){
		d[i]=d2[i];
	}
	d2[i]='\0';

}
int main(){
  char str1[80] = "hello";
  char str2[80] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
  mystrcpy(str2, str1);
  printf("원본 %s  사본 %s\n", str1, str2);
  return 0;
}
