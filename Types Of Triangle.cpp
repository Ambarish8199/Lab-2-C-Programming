#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if (a==b && b==c && c==a)
	printf("equilateral triangle");
	else if (a!=b && b!=c && c!=a)
	printf("scalene triangle");
	else 
	printf("isosceles triangle");
	return 0;
}