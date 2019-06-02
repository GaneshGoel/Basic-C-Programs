#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	printf("Enter any year:");
	scanf("%d",&a);
	if(a>=400)
	if(a%4==0)
	{
		if(a%100==0)
		{
			if(a%400==0)
				printf("The year is a leap year.");
			else
				printf("The year is not a leap year.");
		}
		else
			printf("The year is a leap year.");
	}
	else
		printf("The year is not a leap year.");
	else
		printf("Enter an year greater than 400!!");
	getch();
}
