#include<stdio.h>
int main()
{
int n,i,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=10;++i)
{
if(i==n)
{
count++;
}}
if(count==1)
{
printf ("yes");
}
else
{
printf("NO");
}
return 0;
}
	
	

