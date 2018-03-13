#include<stdio.h>
int main()
{
	char s[733];
	int count=0,i=0;
	
	gets (s);
	while(s[i]!='\0')
	{
	if(s[i]=='0'||s[i]<='9')
	++count;
	i++;
}
printf("nO %d",count);
return 0;
}

