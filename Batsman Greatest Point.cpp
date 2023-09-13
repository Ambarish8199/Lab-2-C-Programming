#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if  (a>b && a>c)
	printf("Maximum Point Is %f",a);
	
	else if (b>c && b>a)
	printf("maximum point is %f",b);
	
	else if (c>b && c>a)
	printf("maximum point is %f",c);

	else /*all three numbers are equal */
    printf("maximum point is %f",a);
			
	return 0;
}
