#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,i,j,k,l,choice;
do
{
printf("1.CONVERT Gram to KIlOGRAM\n");
printf("2.CONVERT KILOGRAM to GRAM\n");
printf("3.CONVERT CENTIMETRE TO METRE\n");
printf("4.CONVERT METRE TO CENTIMETRE\n");
printf("5.CONVERT METRE TO KILOMETRE\n");
printf("6.CONVERT KILOMETRE TO METRE\n");
printf("7.EXIT\n");
printf("ENTER YOUR CHOICE:");
scanf("%d",&choice);
if(choice<1 || choice>7)
{
printf("INVALID INPUT\n");
}
if(choice==1)
{
printf("ENTER YOUR VALUE (IN KG):");
scanf("%d",a);
b=a*1000;
printf("%d KILOGRAM = %d GRAM\n",a,b);
return 0;
}
if(choice==2)
{
printf("ENTER YOUR VALUE (IN GRAM):");
scanf("%d",&c);
d=c/1000;
printf("%d GRAMS = %d KILO GRAMS\n",c,d);
return 0;
}
if(choice==3)
{
printf("ENTER YOUR VALUE IN CENTIMETRE:");
scanf("%d",&e);
f=e/100;
printf(" %d CENTIMETRE = %d METRE\n",e,f);
return 0;
}
if(choice==4)
{
printf("ENTER YOUR VALUE IN METRE:");
scanf("%d",&g);
h=g*100;
printf("%d METRES = %d CENTIMETRE\n",g,h);
return 0;
}
if(choice==5)
{
printf("ENTER YOUR VALUE IN METRE:");
scanf("%d",&i);
j=i/1000;
printf("%d metres  = %d KILOMETRES\n",i,j);
return 0;
}
if(choice==6)
{
printf("ENTER YOUR VALUE IN KILOMETRES:");
scanf("%d",&k);
l=k*1000;
printf("%d KILOMETRES  = %d metres\n",k,l);
return 0;
}
}while(choice!=7);
return 0;
}