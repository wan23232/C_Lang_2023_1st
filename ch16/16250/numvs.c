#include <stdio.h>
int main()
{
	int num[10];
	int vs=0;

	for(int n=0;n<10;n++){
		scanf("%d",&num[n]);
	}
	
	/*
	if (num[0]>num[1]){
		vs=1
	}else{
		vs=0
	}
	if (vs=1){
		if(num[1]>num[2]){
			vs=2
		}else{
			vs=1
		}
	}else{
		if(num[0]>num[2]){
			vs=2
		}else{
			vs=0
		}
	}
	*/
	
	if (num[0]>num[1]){
		vs=1;
	}else{
	vs=0;
	}
	

	for(int n=2;n<10;n++){
		if(num[vs]>num[n]){
			vs=n;
		}else{
			vs=vs;
		}
	}

	printf("%d\n",vs);

	return 0;
}
