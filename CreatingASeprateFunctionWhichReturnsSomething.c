#include<stdio.h>
int lmn(int,int);
int main()
{
int x,y;
x=100;
y=200;
printf("total is %d\n",lmn(x,y));
printf("cool\n");
x=1000;
y=2000;
printf("total is%d\n",lmn(x,y));
return 0;
}
int lmn(int p,int q)
{
int r;
r=p+q;
return r;
}