#include<stdio.h>
int main()
{
int x;
printf("enter your alphabet:");
scanf("%c",&x);
switch(x)
{
case 'A':
case 'a':
printf("%c is a vowel\n",x);
break;
case 'E':
case 'e':
printf("%c is a vowel\n",x);
break;
case 'I':
case 'i':
printf("%c is a vowel\n",x);
break;
case 'O':
case 'o':
printf("%c is a vowel\n",x);
break;
case 'U':
case 'u':
printf("%c is a vowel\n",x);
break;
default:
printf("Not A Vowel\n");
}
return 0;
}