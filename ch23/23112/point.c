#include <stdio.h>
struct point{
	int row;
	int col;

};
struct point getPoint(){
	struct point p;
	scanf("%d %d",&p.row,&p.col);
	return p;
}

int main()
{
    struct point p;
    p = getPoint();
    printf("입력된 행: %d 열: %d\n", p.row, p.col);

}
