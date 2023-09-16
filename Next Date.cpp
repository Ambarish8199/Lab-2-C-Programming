#include<stdio.h>
#include<math.h>
int main()
{
	int d,m,y;
	scanf("%d %d %d",&d,&m,&y);
	if ((m==1 || m==3 ||m==5 ||m==7||m==8|| m==10|| m==12) && (d>0 && d<=30))
	printf("The Next Day Is %d\nThe Month Is %d\nThe Year is %d",d+1,m,y);
	else if ((m==1 || m==3 ||m==5 ||m==7||m==8|| m==10) && (d==31))
	printf("The Next Day Is 1\nThe Month Is %d\nThe Year Is %d\n",m+1,y);
	else if ((m==12) && (d==31))
	printf("The Next Day Is 1\nThe Month Is 1\nThe Year Is %d",y+1);
	else if ((m==4 || m==6 || m==9||m==11) && (d>0 && d<=29))
	printf("The Next Day Is %d\nThe Month Is %d\nThe Year Is %d",d+1,m,y);
	else if ((m==4 || m==6 || m==9||m==11) && (d==30))
	printf("The Next Day Is 1\nThe Month Is %d\nThe Year Is %d",m+1,y);
	else if (((y%4==0) && (y%100!=0 || y%400==0)) && (m==2) && (d>0 && d<=28))
	printf("The Next Day Is %d\nThe Month Is %d\nThe Year is %d",d+1,m,y);
	else if (((y%4==0) && (y%100!=0 || y%400==0)) && (m==2) && (d==29))
	printf("The Next Day Is 1\nThe Month Is %d\nThe Year Is %d",m+1,y);
	else if (((y%4!=0) && (y%100==0 || y%400!=0)) && (m==2) && (d>0 && d<=27))
	printf("The Next Day Is %d\nThe Month Is %d\nThe Year Is %d",d+1,m,y);
	else if (((y%4!=0) && (y%100==0 || y%400!=0)) && (m==2) && (d==28))
	printf("The Next Day Is 1\nThe Month Is %d\nThe Year Is %d",m+1,y);
	else 
	printf("Invalid Input");
	return 0;
}