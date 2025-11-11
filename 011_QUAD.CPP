/*im sorry
11/11/2025*/
#include <stdio.h>
#include <math.h>

void main(){
	int t, a, b, c;
	printf("enter a b and c");
	scanf("%d%d%d",&a,&b,&c);
	t = b*b-4*a*c;
	t = pow(t, 0.5);
	printf("first root is %d",(-b+t));
	printf("second root is %d",(-b-t));}