#include<stdio.h>
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	
	if(num%5==0 && num%11==0){
		printf("Number is divisible by 5 and 11");
	}else if(num%5==0){
		printf("Number is divisible by 5");
		
	}else if(num%11==0){
		printf("Number is divisible by 11");
		
	}else{
		printf("Number is not divisible by 5 and 11 ");
	}
}
