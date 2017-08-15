#include<stdio.h>
void main()
{
int number;
int min,max;
printf("Enter the minimum range: ");    
scanf("%d",&min);
printf("Enter the maximum range: ");
scanf("%d",&max);
for(number = min;number <= max; number++)
if(number % 2 !=0)
printf("%d ",number);
}
