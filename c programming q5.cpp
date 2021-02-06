#include<stdio.h>
int main(){
printf("enter character to check vowel or consonant:");
char c;
scanf("%c" ,&c);
switch(c)
{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	printf(" %c is Vowel\n" ,&c);
	break;
default:
	printf("%c is consonant\n", &c);
}
return 0;	
}
