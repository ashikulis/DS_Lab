#include <bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n)
{
    int key;
    for(int i = 1; i<n; i++)
    {
        key = a[i];
        int j = i-1;
        while(j>= 0 && a[j]>key)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]= key;
    }
}

void printArray(int a[],int n)
{
    cout<<"Printed Array:"<<endl;
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
    cout<<endl;
}
int main() {
    srand(time(0));
    int n;
    // cout<<"Enter array length: ";
    cin>>n;
    //n=5;
    cout<<"Enter array length: "<<n<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
        arr[i] = rand()%100+1;
    printArray(arr,n);
    insertionsort(arr,n);
    cout<<"sorted: ";
    printArray(arr,n);
    return 0;
}