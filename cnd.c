#include <stdio.h>
int main()
{
int n,count;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
	n/=10;
	count++;
	
}
	printf("the count of a number is%d",count);
return 0;
}
