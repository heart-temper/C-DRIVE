// checks for an odd or even digit
#include <stdio.h>
void main(){
	int numchk_odd_even;
	printf("enter number");
	scanf("%d",&numchk_odd_even);
	if(numchk_odd_even%2==1) printf("%d is odd",numchk_odd_even);
	else printf("%d is even",numchk_odd_even);
}