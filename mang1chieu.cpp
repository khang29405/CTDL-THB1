#include<stdio.h>
#include<math.h>
void nhapmang(int a[100],int &n)
{
	for(int i=0;i<n;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[100],int n)
{
	for(int i=0;i<n;i++)
	printf("%d\n",a[i]);
}
int snt(int n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n % i ==0)
		return 0;
	}
	return n>1;
}
void sort(int a[100],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[j] < a[j-1])
			{
				int temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
		}
	}
}
void xuatfile(int a[100],int n,char filename[100])
{
	FILE *f;
	f=fopen(filename,"a+");
	if(f == NULL)
	printf("Khong tim thay file!");
	else
	{
		fprintf(f,"\nSo phan tu :%d\n",n);
		fprintf(f,"Mang truoc khi sap xep:\n");
		for(int i=0;i<n;i++)
		fprintf(f,"%d\n",a[i]);
		sort(a,n);
		fprintf(f,"Mang sau khi sap xep:\n");
		for(int i=0;i<n;i++)
		fprintf(f,"%d\n",a[i]);
	}
	fclose(f);
}
void xuatfile1(int a[100],int n,char filename[100])
{
	FILE *f;
	f=fopen(filename,"a+");
	if(f == NULL)
	printf("Khong tim thay file!");
	else
	{
		fprintf(f,"\nSo phan tu %d:\n",n);
		for(int i=0;i<n;i++)
		fprintf(f,"a[%d]=%d\n",i,a[i]);
		int cnt=0;
		for(int i=0;i<n;i++)
		{
			if(snt(a[i]))
			 cnt++;
		}
		if(cnt !=0)
		{
			fprintf(f,"\nCac so nguyen to co trong mang:");
			for(int i=0;i<n;i++)
			{
			  if(snt(a[i])) 
			  fprintf(f,"%d ",a[i]);
	     	}
	    }
	    else
	       fprintf(f,"Khong tim thay so nguyen to trong mang!");
    }
    fclose(f);
}
void xuatfile2(int a[100],int n,int x,char filename[100])
{
	FILE *f;
	int avt[50];
	int cnt=0;
	f=fopen(filename,"a+");
	if(f == NULL)
	printf("Khong tim thay file!");
	else
	{
		fprintf(f,"\nPhan tu can tiem kiem:%d",x);
		for(int i=0;i<n;i++)
		{
			if(a[i] == x)
			{
				avt[cnt]=i;
				cnt++;
			}
		}
		if(cnt !=0)
		{
			fprintf(f,"\nPhan tu %d xuat hien o cac vi tri:",x);
			for(int i=0;i<cnt;i++)
			fprintf(f,"%d ",avt[i]);
    	}
    	else
		 fprintf(f,"Phan tu %d khong xuat hien trong mang!",x);
	fclose(f);
    }
}
int main()
{
   int n,a[100],x;
   printf("Nhap so phan tu:");
   scanf("%d",&n);
   nhapmang(a,n);
   xuatmang(a,n);
   xuatfile(a,n,"D:\songuyen.dat.txt");
   xuatfile1(a,n,"D:\songto.dat.txt");
   printf("Nhap phan tu can tiem kiem trong mang:");
   scanf("%d",&x);
   xuatfile2(a,n,x,"D:\kqtk.dat.txt");
}

