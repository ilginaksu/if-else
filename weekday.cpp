#include<stdio.h>
int main()
{
	int wdn;
	printf("Enter the weekday number:");
	scanf("%d",&wdn);
	if(wdn==1) printf("Day is monday.\n");
	else if(wdn==2) printf("Day is tuesday.\n");
	    else if(wdn==3) printf("Day is wednesday.\n");
	         else if(wdn==4) printf("Day is thursday.\n");
	               else if(wdn==5) printf("Day is friday.\n");
	                    else if(wdn==6) printf("Day is saturday.\n");
	                          else if(wdn==7) printf("Day is sunday.\n");
}
