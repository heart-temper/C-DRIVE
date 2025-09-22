/* making letter checker, this is the second try with ternary operator
can i make this more efficient without using data structures?
-11|09|2025*/
#include <stdio.h>
#define will_it_vow main
void will_it_vow(){
	char vowo;
	printf("\n hi");
	scanf(" %c",&vowo);
	printf("%c \n",vowo);
	(vowo=='a')?printf("%c is vowel",vowo):(vowo=='e')?printf("%c is vowel",vowo):(vowo=='i')?printf("%c is vowel",vowo):(vowo=='o')?printf("%c is vowel",vowo):(vowo=='u')?printf("%c is vowel",vowo):printf("%c is consonant :P",vowo);}
