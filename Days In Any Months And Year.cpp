#include<stdio.h>
#include<math.h>
int main ()
{
	int y,m;
	scanf("%d %d",&y,&m);
	printf("The Year Is %d\nThe Month Is %d\n",y,m);
	if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	printf("31 Days");
	else if (m==4 ||m==6||m==9||m==11)
	printf("30 Days");
	else if ((y%4==0) && (y%100!=0 || y%400==0) && (m==2))
	printf("29 Days");
	else
	printf("28 Days");
	return 0;
	
}