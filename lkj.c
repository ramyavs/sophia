#include<stdio.h>
void main()
{
int n,n1,rev=0,rem;
printf("enter a number");
scanf(%d",&n);
n1=n;
while(n>0)
rem =n%10;
rev=rev*10+rem;
n=n/10;
if(n1==rev)
{
printf("the number is palindrome");
}
else
{
ptrintf("the number is not a palindrome");
}}
