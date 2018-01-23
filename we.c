#include<stdio.h>
void main()
{
int pow,num,i=1,sum=1;
printf("enter the power");
scanf("%d",&pow);
printf("enter the number");
scanf("%d",&num);
while(i<=pow)
{
sum=sum*num;
i++;
}
printf("power of a mumber is:%d "num,pow ,sum);
}
