#include<stdio.h>
int main()
{
int x;
int y[5];
int z[5][10];
char m;
char g[7];
char k[5][6];
printf("%lu\n",sizeof(x));
printf("%lu\n",sizeof(int));
printf("%lu\n",sizeof(y[5]));
printf("%lu\n",sizeof(z[5][10]));
printf("%lu\n",sizeof(char));
printf("%lu\n",sizeof(char[7]));
printf("%lu\n",sizeof(char[5][6]));
return 0;
}