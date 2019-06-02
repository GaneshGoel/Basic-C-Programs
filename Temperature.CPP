#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch;
	float a,r=0;
	printf("\tEnter the conversion you want to do");
	printf("\n1.Convert fahrenheit to celsius.");
	printf("\n2.Convert celsius to fahrenheit.");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:{
			printf("Enter the temperature in fahrenheit:");
			scanf("%f",&a);
			r=((a-32)/1.8);
			printf("Converted value is: %f",r);
			}
			break;
		case 2:{
			printf("Enter the temperature in celsius:");
			scanf("%f",&a);
			r=((a*1.8)+32);
			printf("Converted value is: %f",r);
			}
			break;
		default:printf("INVALID CHOICE!!");
	}
	getch();
}

