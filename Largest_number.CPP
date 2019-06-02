#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10],n,i,l;
	printf("Enter number of terms you want to add:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the a[%d] term:",i+1);
		scanf("%d",&a[i]);
	}
	l=a[0];
	for(i=0;i<n;i++)
	{
		if(l<a[i])
			l=a[i];
	}
	printf("%d is largest.",l);
	getch();
}