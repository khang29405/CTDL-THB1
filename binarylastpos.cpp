#include<stdio.h>
int lastpos(int a[100],int n,int x)
{
	int left=0,right=n-1,mid;
	int pos=0;
	while(left<=right)
	{
		mid=(left+right)/2;
		if(a[mid]== x)
		 {
		 	pos=mid;
		 	left=mid+1;
		 }
		 else if(x < a[mid])
		  right=mid-1;
		 else 
		  left=mid+1;
	}
	return pos;
}
int main()
{
	int a[100],n,x;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	printf("a[%d]=%d \n",i,a[i]);
	printf("\nNhap X= ");
	scanf("%d",&x);
	if(lastpos(a,n,x))
	{
		printf("Phan tu %d xuat hien o vi tri cuoi cung la %d",x,lastpos(a,n,x));
	}
	else
	printf("%d khong xuat hien o vi tri nao trong mang",x);
}
