#include<stdio.h>
int main()
{
int x[10],y,largest;
y=0;
while(y<=9)
{
printf("enter a number:");
scanf("%d",&x[y]);
y++;
}
largest=x[0];
y=1;
while(y<=9)
{
if(largest<x[y])
{
largest=x[y];
}
y++;
}
printf("largest number is %d",x[y]);
return 0;
}