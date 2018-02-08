#include<stdio.h>
int main()
{
int n, num;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
num=(num*10)+(n%10);
n/=10;
while(num != 0)
{
switch(num %  10)
{
case 1:
       printf("one");
       break;
	}
num=num/10;
	
}
return 0;
	
}}
