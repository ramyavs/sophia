#include<stdio.h>
int main()
{
	int a[8],n,i,temp;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
		}
	printf("%d",a[n-1]);
return 0;
}

