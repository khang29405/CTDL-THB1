#include<stdio.h>
#include<math.h>
void nhapmang(int a[100],int n)
{
	for(int i=0;i<n;i++)
	{
	  printf("a[%d]=",i);
	  scanf("\n%d",&a[i]);
    }
}
void xuatmang(int a[100],int n)
{
	for(int i=0;i<n;i++)
	printf("%d \n",a[i]);
}
void nhiphan(int a[100],int n,int x)
{
	int mid;
	int left=0,right=n-1;
	int cnt=0;
	do
	{
		mid=(left+right)/2;
		if(a[mid] == x)
		{
			cnt++;
		}
		else if(x < a[mid])
		right=mid-1;
		else
		left=mid+1;
}while(left <= right);
      if(cnt == 0)
      printf("\nX khong co trong mang");
      else
      {
      printf("\nX xuat hien %d lan trong mang",cnt);
      printf("/nX xuat hien o vi tri: %d",mid);
      }
}
void tuantu(int a[100],int n,int x)
{
	int cnt=0;
	printf("X xuat hien o cac vi tri:");
	for(int i=0;i<n;i++)
	{
		if(a[i] == x)
		{
			printf("%d \n",i);
			cnt++;
		}
	}
	if(cnt ==0)
	printf("\nX khong xuat hien trong mang!");
	else
	printf("\nX xuat hien %d lan trong mang!",cnt);
}
int nt(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n % i ==0)
		 return 0;
	}
	return n>1;
}
void timsnt(int a[100],int n)
{
	int cnt=0;
	int avt[10];
	for(int i=0;i<=n;i++)
	{
		if(nt(a[i]))
		{
			cnt++;
			avt[cnt]=i;
		}
	}
	printf("\nSo lan xuat hien cua so nguyen to: %d\n",cnt);
	printf("So nguyen to xuat hien o cac vi tri: ");
	for(int i=1;i<=cnt;i++)
	{
		printf("%d ",avt[i]);
	}
}
int main()
{
	int n,a[100],x;
	printf("Nhap so phan tu n:");
	scanf("%d",&n);
	printf("Nhap x:");
	scanf("%d",&x);
	nhapmang(a,n);
	xuatmang(a,n);
	//nhiphan(a,n,x);
	tuantu(a,n,x);
	timsnt(a,n);
}
