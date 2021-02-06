#include<stdio.h>
#define pi 3.14
int main(){
	int r,d;
	float a,c;
	printf("radius of the circle is:");
	scanf("%d" ,&r);
	a= pi*r*r;
	c=2*pi*r;
	d=2*r;
	printf("\n area of the circle is:%f" ,a);
	printf("\n circumference of circle is:%f" ,c);
	printf("\n diameter of circle is:%d" ,d);
	return 0;
	
}
