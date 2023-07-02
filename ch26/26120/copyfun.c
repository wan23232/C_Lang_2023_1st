#include <stdio.h>

void copy(int  *to, int from){
    *to = from;
}

int main(){
  int x=0, y=0;
  scanf("%d", &y);
  copy(&x, y);  // x에 y값을 복사하려는 시도
  printf("%d\n", x); // y와 같은 값이 출력되기를 희망
  return 0;
}
