 #include <stdio.h>
 int main()
 {
 	int day;
 	int month;
 	int year;
 	
 	printf("Enter the month:\n");
 	scanf("%d",&month);
 	printf("Enter the year:\n");
 	scanf("%d",&year);
 	if(month==1) printf("January contains 31 day.\n");
 	if(month==2){
 		if(year%4==0) printf("%d is leap year so february contains 29 days.\n ",year);
 		else printf("february contains 28 days.\n");
	 }
	if(month==3) printf("March contains 31 days.\n");
	if(month==4) printf("April contains 30 days.\n");
	if(month==5) printf("May contains 31 days.\n");
	if(month==6) printf("June contains 30 days.\n");
	if(month==7) printf("July contains 31 days.\n");
	if(month==8) printf("August contains 31 days.\n");
	if(month==9) printf("September contains 30 days.\n");
	if(month==10) printf("October contains 31 days.\n");
	if(month==11) printf("November contains 30 days.\n");
	if(month==12) printf("December contains 31 days.\n");
 }
