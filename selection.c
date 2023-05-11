#include<stdio.h>
void swap(int* x, int* y)
{
int temp = *x;
*x = *y;
*y = temp;
}
void SelectionSort(int a[], int n)
{
int i, j, l;
for(i=0;i<=n-1;i++)
{
 l=i;
 for(i=j+1;j<n;j++)
 if(a[j]<a[l])
 l=j;
 swap(&a[i],&a[l]); 
}
}
void read(int a[],int n)
{
int i;
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
}
void print(int a[],int n)
{
int i;
for(i=0;i<n;i++)
 print("%d",a[i]);
}
void main()
{
int a[100],n,x,m;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements of the array:");
read(a,n);
SelectionSort(a,n);
print(a,n);
}