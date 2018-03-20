#include <stdio.h>
int main()
{
	char a[90],sunday,saturday;
	scanf("%s",a);
	if((a==sunday)||(a==saturday))
	{
		printf("yes it is a holiday\n",a);
		
	}
		else
		{
			printf("no it is not a holiday\n",a);
		}
			return 0;
			}
