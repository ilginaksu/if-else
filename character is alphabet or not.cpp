#include<stdio.h>
int main()
{
	char ch;
	printf("enter the alphabet:");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
		printf("%c is an alphabet",ch);
	}
}
