//4. Write a program to calculate sum of squares of first N natural numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int sum,square,number,count=1;
	printf("Enter to calculate sum of squares of first N natural numbers = ");
	scanf("%d",&number);
	
	while(count<=number)
	{
		square=count*count;
		sum=sum+square;
		count++;
	}
	printf("sum is = %d",sum);
	getch();
}
