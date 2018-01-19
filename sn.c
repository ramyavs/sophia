#include<stdio.h>
void main()
{
int n,count=0;
printf("enter the number\n");
scanf("%d\n",&n);
if(n!=0)
{
n=n\10;
++count;
}
printf("%d\n",count);
}
