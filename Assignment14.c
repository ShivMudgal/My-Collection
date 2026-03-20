#include <stdio.h>
#include <math.h>

int main()
{
  int i=0,rem,sum=0,num;
  printf("Enter a number in binary");
  scanf("%d",&num );
  while(num!=0)
  {
    rem = num % 10;
    sum = sum + rem * (int)pow(2,i);
    num= num / 10;
    i++;
  }
  printf("%d",sum);
  return 0;
} 