#include<stdio.h>
#include<stdlib.h>
void msort(int[],int,int);
void merge(int[],int,int,int);
int main()
{
    int a[20],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("before sort - ");
    for(i=0;i<n;i++)
    printf("| %d ",a[i]);
    printf("|\n");
    msort(a,0,n-1);
    printf("after merge sort list is - ");
    for(i=0;i<n;i++)
    printf("| %d ",a[i]);
    printf("|\n");
}
void msort(int a[20],int low,int high)
{
    int mid=(low+high)/2;
    if(low<high)
    {
        msort(a,low,mid);
        msort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    else return;
}
void merge(int a[20],int low,int mid,int high)
{
    int i, j, k;
    int n1 = mid-low+1;
    int n2=high-mid;
    int l[n1],r[n2];
    for(i=0;i<n1;i++)
        l[i]=a[low+i];
    for(j=0;j<n2;j++)
        r[j]=a[mid+1+j];
    i=0;j=0;k=low;
    while(i<n1&&j<n2)
    {
        if(l[i]<=r[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=r[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=l[i];
        i++;k++;
    }
    while(j<n2)
    {
        a[k]=r[j];
        k++;j++;
    }
}