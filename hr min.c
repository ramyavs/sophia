#include<stdio.h>
int main()
{
	int t,hr,min;
	scanf("%d",&t);
	hr=t/60;
	min=t%60;
	printf("%d%d",hr,min);
	return  0;
}

