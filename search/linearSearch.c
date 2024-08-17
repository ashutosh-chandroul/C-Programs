#include<stdio.h>
int main()
{
int x[5]={1,2,3,4,5},z;
printf("Enter a number to search: ");
scanf("%d",&z);
for(int e=0;e<5;e++)
{
if(z==x[e])
{
printf("%d found at %d index",z,e);
return 0;
}
}
printf("%d not found",z);
return 0;
}