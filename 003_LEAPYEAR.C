/* this one is for leap year, dunno but should i make a mathematical function or should i just take an origin point..
whatever, goodluck me!
10|09|2025
> theres conditions for a leap year already listed in the gregorian calender...*/
#include <stdio.h>
#define leap_yr main
void leap_yr(){
	int input,counter;
	printf("enter your year");
	scanf("%d",&input);
	if(input%4==0){
		if(input%100==0){
			if(input%400==0) printf("leap year");
			else printf("not leap year");}
		else printf("leap year");}
	else printf("not leap year");
	getch();
	}
