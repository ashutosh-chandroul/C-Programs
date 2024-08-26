#include<stdio.h>
int main()
{
int x,y;
int *z;
x=30;
printf("%d\n",x);
z=&x;
*z=580;
printf("%d\n",x);
y=30;
printf("%d\n",y);
z=&y;
*z=399;
printf("%d\n",y);
z=NULL;
return 0;
}