#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,a[20],*p,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the numbers:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the a[%d] term:",i+1);
		scanf("%d",&a[i]);
	}
	*p=a[0];
	for(i=0;i<n;i++)
	{
		if(*p<=a[i])
			*p=a[i];
	}
	printf("%d is largest.",*p);
	getch();
}