#include<stdio.h>
int main()
{
	int i,j,a,n,number[30];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&number[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(number[i]>number[j])
			{
				a=number[i];
				number[i]=number[j];
				number[j]=a;
			}
		}
	}
	printf("the ascending order is\n");
	for(i=0;i<n;i++)
printf("%d\n",number[i]);
printf("%d\n",number[0]);
printf("%d\n",number[2]);
return 0;
}
