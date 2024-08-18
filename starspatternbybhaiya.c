#include<stdio.h>
int main()
{
int x,y,lines,stars,spaces;
stars=1;
lines=3;
spaces=3;
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
stars++;
spaces--;
x++;
}
return 0;
}