#include<stdio.h>
void main()
{
int sum=0,i,n;
printf("enter the numbers\n");
scanf("%d\n",&n);
for(i=1; i<=n;++i)
{
sum=sum+i;
}
printf("%d\n",sum);
}
