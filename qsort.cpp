#include<iostream>
#include<iomanip>
using namespace std;
void quicksort(int[],int,int);
int partition(int[],int,int);
void swap(int*,int*);
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<"before quicksort : ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    quicksort(a,0,n-1);
    cout<<"after quicksort list is: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void quicksort(int a[],int low,int high)
{
    //cout<<"in qsort fn";
    if(low<high)
    {
        int pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}
int partition(int a[],int low,int high) 
{ 
    int pivot=a[high];
    int i=low-1;
    for (int j=low;j<=high-1;j++)
    {
        
        if(a[j]<=pivot) 
        { 
            i++;
            swap(&a[i],&a[j]);
        } 
    } 
    swap(&a[i+1],&a[high]);
    return i+1;
} 