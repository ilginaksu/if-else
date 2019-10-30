#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character:");
	scanf("%c",&ch);
	  if(ch>='a'&& ch<='z' || ch>='A' && ch<='Z'){
	  	printf("Character is alphabet.");
	  }else if(ch>='0' && ch<='9'){
	  	printf("Character is digit.");
	  }else{
	  	printf("Chracter is a special character.");
	  }
}
