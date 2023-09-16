#include<stdio.h>
#include<math.h>
int main()
{
	char I;
	scanf("%c",&I);
	if ((I>=65 && I<=90) || (I>=97 && I<=122))
	printf("Alphabet");
	else if (I>=48 && I<=57)
	printf("Digit");
	else 
	printf("Special Character");
    return 0;
}