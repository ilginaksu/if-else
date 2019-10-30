#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int num3;
	printf("enter the num1:");
	scanf("%d",&num1);
	printf("enter the num2:");
	scanf("%d",&num2);
	printf("enter the num3:");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3){
		printf("num1 is maximum");
		
	}
	else if(num2>num1 && num2>num3){
			printf("num2 is maximum");
		
	}
	    else {
	    	printf("num3 is maximum");
		}
}
