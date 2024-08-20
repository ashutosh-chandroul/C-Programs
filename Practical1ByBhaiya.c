#include<stdio.h>
int main()
{
int x,sq,y;
x=1;
while(x<=9999)
{
sq=x*x;
if(sq<=9999)
{
y=sq%10;
if(y==0 ||y==1 ||y==4 ||y==9 )
{
printf("%d\n",sq);
}
}
x++;
}
return 0;
}