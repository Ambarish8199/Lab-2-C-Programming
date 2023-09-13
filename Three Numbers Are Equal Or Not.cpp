#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c && c==a)
	printf("the three numbers are equal");
	else 
	{
    printf("The print numbers are not equal"); 
	}
	return 0;
}
