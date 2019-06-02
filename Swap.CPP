#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b;
	printf("Enter the numbers to be swapped:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("Numbers before swapping are:\n");
	printf("a=%d",a);
	printf("\nb=%d",b);
	int temp=a;
	a=b;
	b=temp;
	printf("\nNumbers after swapping are:\n");
	printf("a=%d",a);
	printf("\nb=%d",b);
	getch();
}

