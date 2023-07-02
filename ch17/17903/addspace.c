#include <stdio.h>
void addspace(char copy[],char org[]){
	for(int i=0;org[i]!='\0';i++){
		char c;
		c=org[i];
		copy[i]=c;
	}
	for(int i=0;copy[i]!='\0';i++){
		if(copy[i]==','){
			char c;
			char b;
			c=copy[i+1];
			copy[i+1]=' ';
			b=copy[i+2];
			copy[i+2]=c;
			copy[i+3]=b;
		}
	}
}
// main 함수는 수정하지 말 것.
int main(){
	char org[100], copy[100];
	fgets(org, 100, stdin);  // 그냥 쓰면 된다.
	addspace(copy, org);
	printf("원본: %s\n", org);
	printf("결과: %s\n", copy);
	return 0;
}
