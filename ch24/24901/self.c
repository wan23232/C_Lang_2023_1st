#include <stdio.h>
#include <unistd.h>

// 함수 정의
void fun(){
	printf("hello!\n");
	sleep(1);
	fun();
}

int main(){
	fun();
	return 0;
}
