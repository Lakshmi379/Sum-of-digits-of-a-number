#include<stdio.h>
#include <stdio.h>
int main()
{
  int num, rem, sum;

  printf("\nEnter any number:\n");
  scanf("%d",&num);

  for (sum=0;num>0;num=num/10)
  {
    rem=num%10;
    sum=sum+rem;  
  }
printf("\n Sum of the digits of given number = %d", sum);
  return 0;
}

