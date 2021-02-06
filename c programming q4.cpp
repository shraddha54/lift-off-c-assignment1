#include<stdio.h>
int main(){
	float p,c,m,b,co,per;
	printf("Enter marks of five subjects:\n");
	scanf("%f %f %f %f %f",&p,&c,&m,&b,&co);
	per=(p+c+m+b+co)/5;
	if (per>= 90){
		printf("GRADE A\n");
	
	}
	else if(per>=80)
	{printf("GRADE B\n");
		}
	
	else if(per>=70)
	{printf("GRADE C\n");
		}
	
	else if(per>=60)
	{printf("GRADE D\n");
		}
	
	else
		if(per>=40){printf("GRADE E\n");
		}
	
	else
		{printf("GRADE F \n");
		}
	return 0;	
	}

