#include<stdio.h>
int main(){
	int i,t,e=0,ep=0;
	printf("enter the number of elements in the array: ");
	scanf("%d" ,&t);
	int n[t];
	printf("\n enter %d elements: " ,t);
	for(i=0;i<t;i++)
	{
		scanf("%d" ,&n[i]);
	}
	for(i=0;i<t;i++){
		if(n[i]%2==0)
		e+=n[i];
		if((i+1)%2==0)
		ep+=n[i];
	}
	printf("sum of even elements: %d\n" ,e);
	printf("sum of even position elements: %d\n" ,ep);
	return 0;
}
