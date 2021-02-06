#include<stdio.h>
int main(){
	float tc,tf;
	printf("enter the temperature in celcius:" );
	scanf("%f",& tc);
	tf = (tc*1.8)+32;
	printf("temperature in fahrenheit: %f",tf);
	return 0;
}
