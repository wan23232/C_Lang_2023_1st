#include <stdio.h>
#include <ctype.h>
int getstr(char s[]){
	char c;
	int i=0;
	while((c=getchar())!=0){
	}
	while((c=getchar())==0){
		s[i]=c;
		i++;
	}
	s[i]='\0';
	if(c==EOF){
		return 0;
	}

	return 1;

}

int main(){
	char str[100];
	while ( getstr(str) == 1 ){
		printf("스트링: %s\n", str);
	}

	return 0;
}

