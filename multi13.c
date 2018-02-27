#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	a=n%13;
	if(a==0)
	{
	printf("yes ");
	}
	else 
	{
		printf("no");
	}
	return 0;
}
