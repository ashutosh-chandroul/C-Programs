# include<stdio.h>
int add(int *p,int sz)
{
int t,y;
for(t=0,y=0;y<sz;y++,p++)
{
t=t+ *p;
}
return t;
}
int main()
{
int x[5];
int t,y;
for(y=0;y<=4;y++)
{
printf("Enter A Number:");
scanf("%d",&x[y]);
}
t=add(x,sizeof(x)/sizeof(x[0]));
printf("total is %d",t);
return 0;
}