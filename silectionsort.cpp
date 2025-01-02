#include <bits/stdc++.h>
using namespace std;
void silectionsort(int a [],int n)
{
    int main_index, temp;
    for(int i=0; i<n-1;i++)
    {
        main_index=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[main_index])
            main_index = j;
        }
        if(main_index !=i)
        {
            temp = a[main_index];
            a[main_index]= a[i];
            a[i] = temp;
        }
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
    silectionsort(arr,n);
    cout<<"sorted: ";
    printArray(arr,n);
    return 0;
}