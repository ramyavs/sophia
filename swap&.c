#include<stdio.h>
void swap(int,int);
void main()
{
	int a=10,b=30;
	printf("before swappimg values of a and b are %d and%d",a,b);
swap(a,b);
printf("after swapping values of a and b are %d and %d",a,b);
}
swap(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("values of x and y are %d and %d",x,y);
}

