#include <stdio.h>
int main(){
	char names[5][10] = {
		"Charley", "Bill", "Eric","Dave", "Abe"
	};
	
	int order[5] = {4,1,0,3,2};  // 순서를 써 넣어보라. 
	// order[0]에 가장 빠른 이름의 인덱스 들어간다.
	
	// order 를 이용하여 알파벳 순으로 출력한다.
	for (int i=0;i<5;i++){
		printf("%s\n",names[order[i]]);
		
	}
	return 0;
}
