#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    //cout<<endl<<"Array Printed"<<endl;
}

void bublesort(int a[],int n)
{
    int temp;
    for(int i = 0;i <n;i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if (a[j]>a[j+1]) // for assending order
              //use < for disending order
            {
                temp=a [j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

int main()
{
    srand(time(0));
    int n;
    cin>>n; // Array length
    int arr[n];
   
    for(int i= 0;i<n;i++)
    {
        arr[i]=rand()%100+1;
    }

    cout<<"Unsorted:"<<endl;
    printArray(arr,n);

    bublesort(arr,n);
    cout<<endl <<"Sorted:"<<endl;
    printArray(arr,n);
    return 0;
}