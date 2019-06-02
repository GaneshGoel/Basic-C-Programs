#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],ch,i;
	float r=0;
	printf("Enter the number of terms:");
	scanf("%d",&ch);
	printf("Enter the numbers:\n");
	for(i=0;i<ch;i++)
	{
		scanf("%d",&a[i]);
		r+=a[i];
	}
	printf("Average of the numbers entered is:%f",r/ch);
	getch();
}
