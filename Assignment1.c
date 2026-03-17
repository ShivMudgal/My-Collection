#include <stdio.h>

int main()
{
int year;
printf("enter a year: \n");
scanf("%d",&year);
if ((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0) )
{
    printf("the year %d is a leap year \n",year);
}
else
{
    printf("the year %d is not a leap year",year);
}

return 0;
}