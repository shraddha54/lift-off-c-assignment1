#include<stdio.h>
int main(){
	int a,b,c;
	printf("take two numbers :\n");
	scanf("%d,%d", &a,&b);
	c = a+b;
	printf("\naddition of two numbers: %d" ,c);
	c = a-b;
	printf("\nsubstraction of two number:%d" ,c);
	c= a*b;
	printf("\nmultiplication of two numbers:%d", c);
	c = a/b;
	printf("\ndivision of two numbers :%d", c);
	c=a%b;
	printf("\nmodulo of two numbers:%d", c);
	return 0;
}
