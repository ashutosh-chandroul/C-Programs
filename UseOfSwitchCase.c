#include<stdio.h>
int main()
{
int x;
printf("enter a number(10,20 or 30):");
scanf("%d",&x);
switch(x)
{
case 10:
printf("good\n");
break;
case 20:
printf("bad\n");
break;
case 30:
printf("ugly\n");
default:
printf("invalid input\n");
}
return 0;
}