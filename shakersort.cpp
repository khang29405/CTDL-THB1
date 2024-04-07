#include<stdio.h>
void hoanvi(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void shakersort(int a[100],int n)
{
	int left=0,right=n-1,k=0;
	while(left < right)
	{
		for(int i=right;i>left;i--)
		{
			if(a[i] < a[i-1])
			{
				hoanvi(&a[i],&a[i-1]);
				k=i;
			}
		}
		left=k;
		for(int i=left;i<right;i++)
		{
			if(a[i] > a[i+1])
			{
				hoanvi(&a[i],&a[i+1]);
				k=i;
			}
		}
		right=k;
	}
}
int main()
{
	int a[100],n;
	printf("Nhap N:\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]=",i);
	    scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	printf("a[%d]=%d \n",i,a[i]);
	shakersort(a,n);
	printf("\nMang sau khi sap xep: ");
	for(int i=0;i<n;i++)
	printf("%d ",a[i]);
}
