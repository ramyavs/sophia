#include <stdio.h>
int main()
{
	char s[99];
	int space=0,count=0,l=0,i;
	scanf("%[^\n]",s);
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='              ')

			space++;
			l=count-space;

		}
		printf("%d",l);
	return 0;
}

		
