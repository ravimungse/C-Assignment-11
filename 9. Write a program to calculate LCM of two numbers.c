//9. Write a program to calculate LCM of two numbers
#include<conio.h>
#include<stdio.h>
main()
{
	int num1,num2,count=1,multiple;
	printf("\n Enter num1 = ");
	scanf("%d",&num1);
	printf("\n Enter num2 = ");
	scanf("%d",&num2);
	multiple=num1*num2;
	
	while(count<=multiple)
	{
		if(count%num1==0)
		{
			if(count%num2==0)
			{
				printf("\n LCM is = %d",count);
				break;
			}
		}
	count++;
	}
	getch();	
}
