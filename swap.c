#include<stdio.h>
void swap(int,int);
void main()
{
int a=10,b=20;
printf("before swap values are %d%d",a,b);
swap(a,b);
printf("after swap values are %d%d",a,b);
}
 swap(int x, int y)
{
x=x+y;
y=x-y;
x=x-y;
printf ("swap function values are%d%d",x,y);
}


