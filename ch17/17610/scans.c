#include <stdio.h>
#include <ctype.h>
int getstr(char s[]){
	int i=0;
	char c;


	while((c=getchar())!='\n' && c!=EOF){	
		if(isspace(c)==0){
			s[i]=c;
			i++;
		}
		if(i==99){
			break;
		}

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
