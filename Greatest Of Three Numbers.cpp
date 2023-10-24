#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	
	if (a>b && a>c)
	printf("greatest value is %d",a);
	
	else if (b>c)
	printf("Greatest Value Is %d",b);
	
	else 
	printf("greatest Value Is %d,c");
	return 0;

}

