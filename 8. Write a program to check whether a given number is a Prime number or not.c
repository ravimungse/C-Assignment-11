//8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
#include<conio.h>
main()
{
	int number;
	printf("\n Enter the Number = ");
	scanf("%d",&number);
	
	if(number==1)
	printf("\n This is not a prime number");
	else if(number==2)
	printf("\n This is Prime number");
	else if(number==3)
	printf("\n This is Prime number");
	else if(number%2==0)
	printf("\n this is not a prime number");
	else if(number%3==0)
	printf("\n this is not a prime number");
	else
	printf("\n This is a prime number");
	
	getch();
}
