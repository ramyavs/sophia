#include<stdio.h>
int main()
{
	char a[15];
	int i,c=0;
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if((a[i]>'0')&&(a[i]<'9'))
		c++;
	}
	printf("%d",c);
	return 0;

}

	
