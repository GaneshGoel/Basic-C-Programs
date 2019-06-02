#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int a,b,c,d;
	float r1,r2;
	printf("Enter the value of coefficient of x^2:");
	scanf("%d",&a);
	printf("Enter the value of coefficient of x:");
	scanf("%d",&b);
	printf("Enter the value of constant:");
	scanf("%d",&c);
	if(a!=0)
	{
		d=pow(b,2)-(4*a*c);
		if(d>=0)
		{
			if(d==0)
			{
				r1=(-b)/(2*a);
				r2=r1;
				printf("\nRoots of the equation are:\n%f,%f",r1,r2);
			}
			else
			{
				r1=(-b+sqrt(d))/(2*a);
				r2=(-b-sqrt(d))/(2*a);
				printf("\nRoots of the equation are:\n%f,%f",r1,r2);
			}
		}
		else
			printf("NO REAL ROOTS EXIST");
	}
	else
		printf("The equation is not a quadratic equation!!");
	getch();
}






