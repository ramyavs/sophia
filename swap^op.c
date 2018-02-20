#include <stdio.h>
int main()
{
	int a=50,b=45;
	a=a^b;
	b=a^b;
	a=a^b;
	printf("the swap values are %d%d",a,b);
	return  0;
	

}
