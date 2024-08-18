#include<stdio.h>
int main()
{
int star,line,x,y;
line=5;
star=1;
x=1;
while(x<=line)
{
y=1;
while(y<=star)
{
printf("*");
y++;
}
printf("\n");
star++;
x++;
}
return 0;
}