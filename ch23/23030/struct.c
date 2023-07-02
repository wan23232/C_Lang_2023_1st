#include <stdio.h>
struct point{
	int x;
	int y;
};
int main(int ac, char *av[])
{
	struct point p,q;

	scanf("%d %d %d %d",&p.x,&p.y,&q.x,&q.y);

	if(q.x>p.x){
		printf("오른쪽 ");
	}else if(q.x<p.x){
		printf("왼쪽 ");
	}else{
		printf("같음 ");
	}

	if(q.y>p.y){
		printf("아래\n");
	}else if(q.y<p.y){
		printf("위\n");
	}else{
		printf("같음\n");
	}
	
	return 0;

}
