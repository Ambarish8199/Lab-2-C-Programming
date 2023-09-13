#include<stdio.h>
#include<math.h>
int main()
{
	float b,h,d,r,s;
	scanf("%f",&b);
	printf("the base salary is %f",b);
	scanf("%f",&r);
	printf("the tier is %f",r);
	d = 20*b/100;
	printf("the daily tax is %f",d);
	if (r==1)
	{ 
	h = 40*b/100;
}
    else if (r==2) 
	{ 
	h = 30*b/100;
		}	
	else 
   {
    h = 20*b/100;
}
	printf("the house tax is %f",h);
	s = b + h + d;
	printf("The salary is %f",s);
	return 0;
}