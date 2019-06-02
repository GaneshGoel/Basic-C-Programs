#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch;
	float a,b,r=0;
	printf("Enter two numbers:");
	scanf("%f%f",&a,&b);
	printf("\tSELECT THE OPERATION YOU WANT TO PERFORM.");
	printf("\n1.Addition:");
	printf("\n2.Subtraction:");
	printf("\n3.Multiplition:");
	printf("\n4.Division:");
	printf("\nEnter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:{	r=a+b;
				printf("The sum of the numbers is:");
				printf("%f",r);
			}
			break;
		case 2:{
				r=a-b;
				printf("The difference of the numbers is:");
				printf("%f",r);
			}
			break;
		case 3:{	r=a*b;
				printf("The product of the numbers is:");
				printf("%f",r);
			}
			break;
		case 4:{	r=a/b;
				printf("The division of the numbers is:");
				printf("%f",r);
			}
			break;
		default:printf("INVALID CHOICE!!!");
	}
	getch();
}
