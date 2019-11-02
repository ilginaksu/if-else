#include <stdio.h>
int main()
{
	int side1, side2, side3;
	
    printf("Enter the triangle of side1:");
	scanf("%d",&side1);
	printf("Enter the triangle of side2:");
	scanf("%d",&side2);
	printf("Enter the triangle of side3:");
	scanf("%d",&side3);
	
	if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1){
		
		printf("\nTriangle is valid\n");
		
	}
	else{
		printf("Triangle is not valid");
		
	} 
}
