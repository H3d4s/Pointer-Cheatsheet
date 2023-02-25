#include <stdio.h>
#include <stdlib.h>
float trungBinhCong (int *arr,int n);
void xuatMang (int *arr,int n);
void sapXep (int *arr,int n);
int main ()
{
	//int a[100]; //cấp phát tĩnh
	int *arr,n,i;
	printf ("Nhap vao n\n ");
	scanf ("%d",&n); 
	arr=(int*)malloc(n*sizeof(int)); //cấp phát động, biến con trỏ  thành mảng
	if (arr==NULL)
	{
		printf ("Cap phat vung nho khong thanh cong\n ");
		exit (0);
	}
	else {
		printf ("Cap phat vung nho thanh cong!\n ");
		//nhập mảng
	for (i=0;i<n;i++)	{
		scanf ("%d",&arr[i]);
	}
	// tính trung bình cộng của mảng
	printf ("%.2f\n",trungBinhCong(arr,n));
	// xuất mảng
	xuatMang (arr,n);
	// sắp xếp
	sapXep (arr,n);
		}		
}
float trungBinhCong (int *arr, int n){
	float sum,ave;
	for (int i=0;i<n;i++){
		sum += arr[i];
	}
	ave = (float) sum/n;
	return ave;
}
void xuatMang (int *arr,int n){
	for (int i=0;i<n;i++){
		printf ("%d\n",arr[i]);
	}
}
void sapXep (int *arr,int n){
	int i,j;
	for (i=0;i<n;i++)
	{
	for (j=i+1;j<n;j++)
		{
		if (arr[i]>arr[j])
			{
			int temp = arr[i];
			arr[i] = arr [j];
			arr[j] = temp;
			}
		}
	}
for (i=0;i<n;i++)
		{
		printf  ("%d ",arr[i]);	
		}
}
