#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int x,y,t,*p,*q,*r;
	printf("Enter two numbers:");
	scanf("%d%d",&x,&y);
	*p=x;
	*q=y;
	*r=t;
	printf("\tNumbers before swapping:\n");
	printf("a=%d\nb=%d",*p,*q);
	*r=*p;
	*p=*q;
	*q=*r;
	printf("\n\tNumbers after swapping:\n");
	printf("a=%d\nb=%d",*p,*q);
	getch();
}