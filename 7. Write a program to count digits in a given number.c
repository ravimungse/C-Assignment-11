//7. Write a program to count digits in a given number
#include<stdio.h>
#include<conio.h>
main()
{
	int count=0,digit,number;
	printf("\n Enter the number = ");
	scanf("%d",&number);
	
	while(number!=0)
	{
		number/=10;
		count++;
	}
	printf("\n Digits in Given Number = %d",count);
	getch();
}
