//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0,number,count=1;
	printf("Enter to calculate sum of first N odd natural numbers = ");
	scanf("%d",&number);
	
	while(count<=number*2)
	{
		sum=count+sum;
		count+=2;
	}
	printf("Sum is = %d",sum);
	getch();
}
