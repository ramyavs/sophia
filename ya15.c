#include<stdio.h>
int main()
{
int n,temp1,temp2,num1,num2,i,rem,result=0;
printf("enter the number");
scanf("%d%d",&num1, &num2);
printf("armstrong between the %d and %d is:",num1, num2);
for(i = num1+1; i<num2; i++)
temp1  = i;
temp2  = i;
while(temp1 != 0)
{
temp1 /= 10;
++n;
}
while(temp2 != 0)
{
rem =temp2  %  10;
result +=  pow(rem, n);
temp2 /= 10;
}
if(result == i)
{
printf("%d",i);
n=0;
result = 0;
}
return 0;
}
