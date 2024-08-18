#include<stdio.h>
int main()
{
int star,line,x,y,space;
space=4;
line=5;
x=1;
star=1;
while(x<=line)
{
y=1;
while(y<=space)
{
printf(" ");
y++;
}
y=1;
while(y<=star)
{
printf("*");
y++;
}
printf("\n");
star+=2;
space--;
x++;
}
return 0;
}