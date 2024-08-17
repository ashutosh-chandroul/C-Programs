#include<stdio.h>
int main()
{
int x[10],y,largest;
y=0;
while(y<=9)
{
printf("enter the number:");
scanf("%d",&x[y]);
y++;
}
y=1;
largest=x[0];
while(y<10)
{
if(largest<x[y]){
largest=x[y];
}
y++;
}
printf("%d is the largest\n",largest);
return 0;
}