#include<stdio.h>
int main()
{
int x;
int y[2][3];
int z[10][5];
char m;
char g[4][5];
char h[3][5];
printf("size of x is %lu bytes size of address of x is %lu\n",sizeof(x),sizeof(&x));
printf("size of y is %lu bytes size of address of y is %lu\n",sizeof(y),sizeof(&y));
printf("size of z is %lu bytes size of address of z is %lu\n",sizeof(z),sizeof(&z));
printf("size of m is %lu bytes size of address of m is %lu\n",sizeof(m),sizeof(&m));
printf("size of g is %lu bytes size of address of g is %lu\n",sizeof(g),sizeof(&g));
printf("size of h is %lu bytes size of address of h is %lu\n",sizeof(h),sizeof(&h));
return 0;
}