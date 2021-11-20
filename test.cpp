#include <stdio.h>
int main()
{
	void BubbleSort(int a[],int n);
	int a[20],i,n=20;
	for(i=0;i<20;i++)
	{
		printf("%d:",i+1);
		scanf("%d",&a[i]);
	}		
	BubbleSort(a,n);
	for(i=0;i<20;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
void BubbleSort(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(a[j]>a[j-1])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}