#include<stdio.h>
int main()
{
int x[10],y,smallest;
y=0;
while(y<=9)
{
printf("enter a number:");
scanf("%d",&x[y]);
y++;
}
smallest=x[0];
y=1;
while(y<=9)
{
if(smallest>x[y])
{
smallest=x[y];
}
y++;
}
printf("smallest number is %d",x[y]);
return 0;
}
