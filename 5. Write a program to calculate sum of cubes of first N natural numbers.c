//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
#include<conio.h>
main()
{
	int sum,cube,number,count=1;
	printf("\n Enter to calculate sum of cubes of first N natural numbers = ");
	scanf("%d",&number);
	
	while(count<=number)
	{
		cube=count*count*count;
		sum=sum+cube;
		count++;
	}
	printf("Sum of Cubes ins = %d",sum);
	getch();
}
