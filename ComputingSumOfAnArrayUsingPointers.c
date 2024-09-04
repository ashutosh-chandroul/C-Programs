#include<stdio.h>
int main()
{
int x[5];
int y,t;
int *p;
y=0;
for(y=0;y<=4;y++)
{
printf("Enter a Number:");
scanf("%d",&x[y]);
}
t=0;
p=&x[0];
for(y=0;y<=4;y++)
{
t=t+*p;
p++;
}
printf("Total Is %d\n",t);
return 0;
}