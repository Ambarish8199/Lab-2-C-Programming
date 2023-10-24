#include<stdio.h>
#include<math.h>
int main()
{
	int u;
	scanf("%d",&u);
	/* Rs 2 if 0<u<250
	   Rs 5 if 250<u<350
	   Rs 10 if u>350 
	   Sur Charge = 100*/
	if (u>=0 && u<=250)
	printf("%d is The electricity bill",u*2 + 100);
	else if (u>250 && u<350)
	printf("%d is the electricity bill",u*5 + 100);
	else 
	printf ("%d is the electricity bill",u*10 + 100);
	return 0;
}
