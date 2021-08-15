#include<stdio.h>
#include<conio.h>
void main()
{
	int num,n,s,digit;
	clrscr();
	printf("Sum of digits of a number\n");
	printf("--------------------------\n");
	s=0;n=num;
	while(num!=0)
	{
	digit=num%10;
	s=s+digit;
	num=num/10;
	printf("Sum of digits of %d is %d,n,s");
	}
}
