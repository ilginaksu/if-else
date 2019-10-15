#include <stdio.h>
int main()
{
	
	int ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch=='a'|| ch=='A' || ch=='e' || ch=='E'|| ch=='i'|| ch=='I' || ch=='o' || ch=='O' || ch=='u'|| ch=='U'){
		printf("%c is vowel",ch);
	}
	else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
		printf("%c is constant",ch);
	}
	else{
		printf("%c is neither vowel nor constant then it is not alphabet",ch);
	}
}
