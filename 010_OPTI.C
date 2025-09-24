/*ITS THE 3RD DAY ON THIS
24|09|2025*/
#include <stdio.h>
#include <math.h>
int main(){
	//declare variables
	double carry;
	int i,root, input, isprime=1;
	//input value
	printf("enter your number");
	scanf("%d",&input);
	//check exception
	if(input<2){ printf("not prime"); return 0;}
	//make loop boundary
	carry=sqrt(input);
	//assign loop boundary
	root=carry+1;
	//run loop
	for(i=2;i<=root;i++)
	{	if(input%i==0){isprime=0; break;}
	}
	if(isprime==1)
		printf("prime");
	else printf("not prime");
	return 0;}