#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z'){
		printf("Character is uppercase alphabet.");
	}else if(ch>='a' && ch<='z'){
		printf("Character is lowercase alphabet.");
	}else{
		printf("Character is not alphabet.");
	}
}
