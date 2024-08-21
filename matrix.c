#include<stdio.h>
int main()
{
int x[3][3],y[3][3],choice;
int row_index,column_index;
int row_total,grand_total,column_total;
do
{
printf("1.add data\n");
printf("2.print matrix\n");
printf("3.transpose matrix\n");
printf("4.exit\n");
printf("enter your choice:");
scanf("%d",&choice);
if(choice<1 || choice>4)
{
printf("invalid input");
}
if(choice==1)
{
for(row_index=0;row_index<=2;row_index++)
{
for(column_index=0;column_index<=2;column_index++)
{
printf("enter data in (%d,%d) cell:",row_index,column_index);
scanf("%d",&x[row_index][column_index]);
}
}
continue;
}
if(choice==2)
{
grand_total=0;
row_total=0;
for(row_index=0;row_index<=2;row_index++)
{
for(column_index=0;column_index<=2;column_index++)
{
printf("%d   ",x[row_index][column_index]);
grand_total=grand_total+x[row_index][column_index];
row_total=row_total+x[row_index][column_index];
}
printf("%13d",row_total);
printf("\n");
}
for(column_index=0;column_index<=2;column_index++)
{
column_total=0;
for(row_index=0;row_index<=2;row_index++)
{
column_total=column_total+x[row_index][column_index];
}
printf("%13d",column_total);
printf("\n");
}
printf("%13d",grand_total);
printf("\n");
continue;
}
if(choice==3)
{
for(row_index=0;row_index<=2;row_index++)
{
for(column_index=0;column_index<=2;column_index++)
{
y[row_index][column_index]=x[column_index][row_index];
}
}
for(row_index=0;row_index<=2;row_index++)
{
for(column_index=0;column_index<=2;column_index++)
{
y[row_index][column_index]=x[column_index][row_index];
}
}
for(row_index=0;row_index<=2;row_index++)
{
for(column_index=0;column_index<=2;column_index++)
{
y[row_index][column_index]=x[column_index][row_index];
}
}
for(row_index=0;row_index<=2;row_index++)
{
for(column_index=0;column_index<=2;column_index++)
{
y[row_index][column_index]=x[column_index][row_index];
}
}
for(row_index=0;row_index<=2;row_index++)
{
for(column_index=0;column_index<=2;column_index++)
{
x[row_index][column_index]=y[row_index][column_index];
}
}
printf("\n matrix is transposed\n\n");
continue;
}
}while(choice!=4);
return 0;
}