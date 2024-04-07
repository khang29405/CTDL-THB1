#include<stdio.h>
void bubblesort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		if(a[j] < a[j-1])
		{
			printf("%d \n", a[j]);
			int temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
		}
	}
}

int main()
{
	int n,a[100];
	printf("Nhap N:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("\nNhap a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	printf("\na[%d]=%d",i,a[i]);
	printf("\nMang sau khi sap xep la:\n");
	for(int i=0;i<n;i++)
	printf("%d ",a[i] );
}
