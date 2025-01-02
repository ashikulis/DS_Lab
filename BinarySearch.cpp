#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n)
{
    cout<<"Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble_sort(int a[],int n)///ascending sort
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
void binarySearch(int a[], int n, int x){
int left = 0;
int right = n;
while(left<=right)
{
    int mid = left + (right-left)/2;
    if(a[mid]== x)
    {
        cout<< "Target Found"<<endl;
        return;
    }
    if(a[mid]<x)
    {
        left = mid + 1;
    }
    else
    right = mid -1;
}
cout<< "Target Not Found"<<endl;
}

int main()
{
    srand(time(0));
    cout<<"Enter array length: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100+1;
    }
    printArray(arr,n);
    bubble_sort(arr,n);
    cout<<"Sorted ";
    printArray(arr,n);
    int num;
    cout<<"Enter Target: ";
    cin>>num;
    binarySearch(arr,n,num);
    return 0;
}
