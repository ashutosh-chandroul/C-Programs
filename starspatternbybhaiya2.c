#include<stdio.h>
int main()
{
int x,y,lines,spaces,stars;
lines=8;
stars=1;
spaces=8;
x=1;
while(x<=lines)
{
y=1;
while(y<=spaces)
{
printf(" ");
y++;
}
y=1;
while(y<=stars)
{
printf("*");
y++;
}
printf("\n");
x++;
stars++;
spaces--;
}
return 0;
}