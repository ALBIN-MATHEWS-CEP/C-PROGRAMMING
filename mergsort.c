#include <stdio.h>
int main()
{
	int a[100],b[100],c[200];
	int m, n;
	int i=0,j=0,k=0;
	printf("Enter  the size of the first array : ");
	scanf("%d",&m);
	printf("Enter the elements in sorted order : \n");
	for (i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter  the size of the second array : ");
	scanf("%d",&n);
	printf("Enter the elements in sorted order : \n");
	for (j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	i=0;                  
	j=0;
	while(i<m && j<n)
	{
		if(a[i]<=b[j])
		{
			c[k++]=a[i++];
		}
		else
		{
			c[k++]=b[j++];
		}
	}
	while(i<m)
	{
		c[k++]=a[i++];
	}
	while(j<n)
	{
		c[k++]=b[j++];
	}
	printf("Mergerd Array is :  ");
	for (i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
	printf("\n");
	return 0;
}
