#include<stdio.h>
void main()
{
int n,c=0;
scanf("%d",&n);
t=n;
while(t!=0)
{
t=t/10;
t=t%10;
c++;
}
printf("%d",c);
}


