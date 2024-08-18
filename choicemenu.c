#include<stdio.h>
int main()
{
int choice,x,y,z;
do
{
printf("1.to add\n");
printf("2.to subtract\n");
printf("3. exit\n");
printf("enter your choice:");
scanf("%d",&choice);
if(choice==1)
{
printf("enter first number:");
scanf("%d",&x);
printf("enter second number:");
scanf("%d",&y);
z=x+y;
printf("%d + %d is %d",x,y,z);
}
if(choice==2)
{
printf("enter first number:");
scanf("%d",&x);
printf("enter second number:");
scanf("%d",&y);
z=x-y;
printf(" %d - %d is %d",x,y,z);
}
if(choice<1 ||choice>3)
{
printf("invalid input\n");
}
}while(choice=!3);
return 0;
}