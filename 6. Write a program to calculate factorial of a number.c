//6. Write a program to calculate factorial of a number
#include<stdio.h>
#include<conio.h>
main()
{
	int count=1,number,f=1;
	printf("Enter the Number = ");
	scanf("%d",&number);
	
	while(count<=number)
	{
		f=count*f;
		count++;
	}
	printf("factorial is = %d",f);
}
