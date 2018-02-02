#include<stdio.h>
int main()
{
int i,f,s,sum,n;
f=0;
s=1;
printf("enter the numbers");
scanf("%d",&n);
printf("fibnoci series");
for(i=1;i <= n;++i) 
printf("%d",f);
{
sum=f+s;
f=s;
s=sum;
}
return 0;
}
