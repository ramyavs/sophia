#include<stdio.h>
int main()
{
int a,k=1;
scanf("%d",&a);
while(a!=0)
{
k=a%10;
if(k%2!=0)
{
	printf("%d\n",k);
	
}
	a=a/10;
}
return  0;
}

