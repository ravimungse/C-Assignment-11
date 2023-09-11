//10. Write a program to reverse a given number
#include<stdio.h>
#include<conio.h>
main()
{
	int number,reverse;
	printf("Enter the Number = ");
	scanf("%d",&number);
	printf("The reverse number is = ");
    
    while(number!=0)
    {
    	reverse=number%10;
    	printf("%d",reverse);
    	number/=10;
	}
	getch();
}
