#include<stdio.h>
int main()
{
	char s[73];
	int  count,i;
	scanf("%s",&s);
	for(i=0;s[i]!=0;i++)
	{
	if(s[i]=='   ')
	{
	count++;
	}
	}
	printf("the string is %d",count+1);
return  0;
}



