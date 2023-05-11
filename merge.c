#include<stdio.h>
#include<stdlib.h>

void printarray(int a[],int l,int r)
{
    for (int i = l; i <=r; i++)
         printf("%d  ",a[i]);      
}

int *merge(int a[],int m,int b[],int n)
{
    int i=1,j=1,k=1;
    int *c=malloc((m+n+1)*sizeof(int));
    while (i<=m && j<=n)
    {
          if(a[i]<b[j])
            c[k++]=a[i++];
          else
            c[k++]=b[j++];  
    }
    while(i<=m)
         c[k++]=a[i++];
    while(j<=n)
         c[k++]=b[j++];
    return c;
}

int *mergesort(int a[],int l,int r)
{
    int m;
    if(l>=r)
      return a+l-1;
    m=(l+r)/2;
    return merge(mergesort(a,l,m),m-l+1,mergesort(a,m+1,r),r-m);
}

int main()
{
    int n,i;
    printf("Enter the number of elements of array to be sorted:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    printf("The sorted array is:\n");
    printarray(mergesort(a,1,n),1,n);
}