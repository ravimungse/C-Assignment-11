//1. Write a program to calculate sum of first N natural numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int number,sum,count;
	printf("\n Enter N Number to Calculate sum = ");
	scanf("%d",&number);
	
	while(count<=number)
	{
		sum=count+sum;
		count++;
	}
	printf("/n Sum is = %d",sum);
	getch();
}
