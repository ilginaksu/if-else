#include<stdio.h>
int main()
{
	int angle1,angle2,angle3;
	int sum;
	
	printf("Enter the first angle:");
	scanf("%d",&angle1);
	printf("Enter the second angle:");
	scanf("%d",&angle2);
	printf("Enter the third angle:");
	scanf("%d",&angle3);
	
	sum=angle1+angle2+angle3;
	
	
	if(angle1!=0 && angle2!=0 && angle3!=0){
		if(sum==180){
			printf("Angle of sum: %d\n",sum);
			printf("Triangle can be formed.");
			
		}else {
			printf("Triangle can not be formed.");
		}
	}
	
}
