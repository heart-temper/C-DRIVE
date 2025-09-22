//finding the largest of two numbers
#include <stdio.h>
void main(){
	int num1, num2;
	printf("enter two numbers to be checked for which is greater or smaller");
	scanf("%d%d",&num1,&num2);
	if(num1>num2) printf("%d is greater than %d",num1,num2);
	else if(num2>num1) printf("%d is greater than %d",num2,num1);
	else printf("invalid comparision");}

