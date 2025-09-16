/*bro im sad :(
-16|09|2025
im pretty sure some idiot already wrote the garbage i did and made it a library like why am i even doing this*/
#include <stdio.h>
void main (){
	char input;
	int convrt;
	printf("enter yumyumyum");
	scanf("%c",&input);
	convrt=input;
	if((convrt>32&&convrt<48)||(convrt>57&&convrt<65)||(convrt>90&&convrt<97||convrt>123&&convrt<128)) printf("its a special char");
	else if(convrt<58&&convrt>47) printf("its a digit");
	else if(convrt<91&&convrt>64) printf("its uppercase");
	else if(convrt>96&&convrt<123) printf("its lowercase");
	else printf("its not uppercase or lowercase or special character or digit");}