#include<stdio.h>
#include<conio.h>
union student
{
	char name[20];
	int rno;
}stud;
void main()
{
	clrscr();
	printf("Enter name of the student:");
	gets(stud.name);
	printf("Enter the rollno. of the student:");
	scanf("%d",&stud.rno);
	printf("\n\tDetails of the student are:");
	printf("\nNAME: ");
	puts(stud.name);
	printf("ROLL NUMBER: %d",stud.rno);
	getch();
}
