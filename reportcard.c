#include<stdio.h>
int main()
{
int p,c,m,e,h,z,t,per,grace;
printf("enter the marks of physics:");
scanf("%d",&p);
if(p<0 || p>100)
{
printf("invalid input\n");
return 0;
}
printf("enter marks of chemistry:");
scanf("%d",&c);
if(c<0 || c>100)
{
printf("invalid input\n");
return 0;
}
printf("enter marks of maths:");
scanf("%d",&m);
if(m<0 ||m>100)
{
printf("invalid input/n");
return 0;
}
printf("enter marks of english:");
scanf("%d",&e);
if(e<0 ||e>100)
{
printf("invalid input\n");
return 0;
}
printf("enter marks of hindi");
scanf("%d",&h);
if(h<0 ||h>100)
{
printf("invalid input\n");
return 0;
}
z=0;
if(p<33)
{
z++;
}
if(c<33)
{
z++;
}
if(m<33)
{
z++;
}
if(e<33)
{
z++;
}
if(h<33)
{
z++;
}
if(z==0);
t=p+c+m+e+h;
per=t/5;
printf("total marks are :%d\n",t);
printf("total percentage are: %d\n",per);
if(per>=60)
{
printf("first division\n");
}
else
{
if(per>=45)
{
printf("second division\n");
}
}
if(per<45)
{
printf("third div\n");
}
if(z==1)
{
grace=0;
if(p>=30 && p<=32)
{
grace=33-p;
p=33;
printf("pass with grace of  %d in physics\n",grace);
}
if(c>=30 && c<=32)
{
grace=33-c;
c=33;
}
if(m>=30 && m<=32)
{
grace=33-m;
m=33;
printf("pass with grace of %d in maths\n",grace);
}
if(e>=30 && e<=32)
{
grace=33-e;
e=33;
printf("pass with grace of %d in english\n",grace);
}
if(h>=30 && h<=32)
{
grace=33-h;
printf("pass with grace of %d in hindi\n",grace);
}
if(grace==0)
{
printf("result compartment\n");
}
}
if(z==2)
{
printf("result fail\n");
}
return 0;
}
