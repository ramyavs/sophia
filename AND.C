#include<stdio.h>
int main()
{
	int A,D,sum=0;
	float N;
	scanf("%d%d%f",&A,&D,&N);
	sum=(N/2)*(2*A+(N-1)*D);
printf("%d",sum);
return  0;
}


