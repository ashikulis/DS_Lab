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

int main()
{
    srand(time(0));
    //cout<<"Enter array length: ";
    int n;
    cin>>n;
    int arr[n];
    clock_t end_time, start_time;
    double duration;
    for(int i=0;i<n;i++)
    {
        arr[i]=rand()%100+1;
    }
    //printArray(arr,n);
    start_time = clock();
    bubble_sort(arr,n);
    end_time = clock();

    duration = (double) (end_time - start_time)/CLOCKS_PER_SEC;
    //cout<<"Sorted ";
    //printArray(arr,n);
    cout<<"Time: "<<duration<<" sec"<<endl;
    return 0;
}