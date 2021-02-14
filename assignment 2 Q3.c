#include<stdio.h>
int main(){
	char a[50];
	int i,word;
	i=0;
	word=1;
	printf("enter the string :");
	gets(a);
	while(a[i]!= '\0')
	{if(a[i]== ' ')
	word++;
	i++;
	}
	printf("\n total words =%d" ,word);
	return 0;
}
