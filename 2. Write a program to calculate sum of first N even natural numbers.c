//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int sum=0,number,count=2;
	printf(" Enter to calculate sum of first N even natural number = ");
	scanf("%d",&number);
		
	while(count<=number*2)
	{
		sum=count+sum;
		count+=2;
	}
	printf("sum is = %d",sum);
	getch();
}
