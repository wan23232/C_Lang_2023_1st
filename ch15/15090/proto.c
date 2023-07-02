#include <stdio.h>
float sqsum(float,float);
float square(float);
int main(){
	float x ;
	x = sqsum(1.5, 2.5);
	printf("%f\n", x);
	return 0;
}

float sqsum(float a, float b){
	return square(a) + square(b);
}

float square(float a){
	return a * a;
}

