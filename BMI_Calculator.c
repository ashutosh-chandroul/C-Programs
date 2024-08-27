#include<stdio.h>
int main()
{
int x,y,bmi;
printf("enter your weight in kg:");
scanf("%d",&x);
printf("enter your height in metre:");
scanf("%d",&y);
bmi=(x/(y*y))*100;
if(bmi<18)
{
printf("you are under weight\n");
}
else if(bmi>18 && bmi<25)
{
printf("normal\n");
}
else if(bmi>25 && bmi<29.5)
{
printf("Obesity 1\n");
}
else if(bmi>29.5 && bmi<35)
{
printf("obesity 2\n");
}
else if(bmi>35 && bmi<40)
{
printf("obesity 3\n");
}
else
{
printf("Over Weight\n");
}
return 0;
}