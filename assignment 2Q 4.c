#include<stdio.h>
int main(){
	int t,i;
printf("\n Enter the number of elements in array: ");
scanf("%d" ,&t);
int n[t];
printf("\n enter %d numbers :" ,t);
for(i=0;i<t;++i)
scanf("%d" ,&n[i]);
int min=n[0],max=n[0];
for(i=0;i<t;++i)
{ if(n[i]<min)
min=n[i];
if(n[i]>max)
max=n[i];
}
printf("largest element=%d\n" ,max);
printf("smallest element=%d\n" ,min);
return 0;
	
}
