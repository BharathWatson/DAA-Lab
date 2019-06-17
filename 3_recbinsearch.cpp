#include<iostream>
#include<iomanip>
using namespace std;
int binsearch(int arr[],int num,int beg,int end)
{
    int mid;
    if (beg>end)
    {
        cout<<"Number is not found";
        return 0;
    }
    else
    {
        mid=(beg+end)/2;
        if(arr[mid]==num)
        {
            cout<<"Number is found at "<<mid<<" index \n";
            return 0;
        }
        else if (num>arr[mid])
        {
            binsearch(arr,num,mid+1,end);
        }
        else if(num<arr[mid])
        {
            binsearch(arr,num,beg,mid-1);
        }
    }
 }
int main()
{
    int a[10],key;
    for(int i=0;i<6;i++)
        cin>>a[i];
    cin>>key;
    binsearch(a,key,0,5);
}