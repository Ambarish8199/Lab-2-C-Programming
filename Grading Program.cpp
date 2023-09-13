#include<stdio.h>
#include<math.h>
int main()
{
	float m,P,M,C,B,CA;
	scanf("%f %f %f %f %f",&P,&C,&M,&B,&CA);
	m = (P+C+M+B+CA)*100/500;
	printf("%f%% Is Percentage",m);
	if (m>=90)
	printf("Grade A");
	else if (m>=80 && m<90)
	printf("Grade B");
	else if (m>=70 && m<80)
	printf("Grade C");
	else if (m>=60 && m<70)
	printf("Grade D");
	else if (m>=40 && m<60)
	printf("Grade E");
	else 
	printf("Grade F");
	return 0;
}
