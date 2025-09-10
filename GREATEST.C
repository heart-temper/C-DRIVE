/*turboc making me want to quit</3
also just got over my aversion to changing the name of main(we C new knowledge :])
	-> apparently you cant change the name of main, you have to redefine your function name as the default so the linker understands that its the entry point
finding the largest of 3 numbers
-10|09|2025*/
#include <stdio.h>
#define greatest_o3 main
void greatest_o3(){
	int num1,num2,num3;
	printf("enter 3 numbers to find the greatest");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2&&num1>num3) printf("%d is greatest",num1);
	else if(num2>num3&&num2>num1) printf("%d is greatest",num2);
	else if(num3>num2&&num3>num1) printf("%d is greatest",num3);
	else printf("invalid comparision");}