#include <stdio.h>
// 함수 pack을 작성한다.
char pack(char data1,char data2,char data3){
	char temp=0;
	if(data1==1){
		temp=temp|0x80;
	}
	if(data2==1){
		temp=temp|0x40;
	}
	if(data3==1){
		temp=temp|0x20;
	}	

	return temp;
}

int main(){
	char mf;  // male or female
	char st;  // 학생 혹은 직원
	char mil;  // 근필 여부

	char packed_data = 0;  // 일단 0으로 초기화
	scanf("%hhd %hhd %hhd", &mf, &st, &mil);  // 각각 1 또는 0만 입력

	packed_data = pack(mf, st, mil);

	printf("%hhx\n", packed_data);
	return 0;
}
