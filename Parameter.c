#include<stdio.h>
void lmn(int,int);
int main()
{
int x,y;
printf("Enter Value Of Length:");
scanf("%d",&x);
printf("Enter Value oF breadth:");
scanf("%d",&y);
lmn(x,y);
return 0;
}
void lmn(int p,int q)
{
int r,s;
r=p+q;
s=2*r;
printf("parameter of rectangle is %d\n",s);
}