#include<stdio.h>
void main()
{
int y;
scanf("%d",&y);
if(y%4&&y%400)
printf("leap year");
else
printf("not a leap year");
}
