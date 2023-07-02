#include <stdio.h>
#include <ctype.h>
#include <string.h>
// copy_small 함수를 작성한다.
// 배열 기호를 쓰지 않고 포인터 연산을 이용해야 만점을 받을 수 있다.
void copy_small(char copy[],char str[]){
	char *temp;
	char *temp2;
	temp=str;
	temp2=copy;
	
	while(*temp!='\0'){	
		if(islower(*temp)){
			*temp2=*temp;
			temp2++;
		}
		temp++;
		
	}
	*temp2='\0';
	strcpy(copy,temp2);
	
}

int main(){
    char str[200] ;
    char copy[200];

	scanf("%s", str);
    copy_small(copy, str);  // str을 copy 로 복사.
    printf("%s %s", str, copy);

    return 0;
}
