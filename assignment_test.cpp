#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n, int &swaps, int &comparisons) {
    swaps = 0;
    comparisons = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
}

int main() {
    srand(time(0));
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    

    clock_t end_time, start_time;
    double duration;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() %100+1;
    }
    start_time = clock();
    
    int swaps, comparisons;
    bubbleSort(arr, n, swaps, comparisons);
    end_time = clock();

    duration = (double) (end_time - start_time)/CLOCKS_PER_SEC;
    cout << "Number of swaps: " << swaps << endl;
    cout << "Number of comparisons: " << comparisons << endl;
    cout<<"Time: "<<duration<<" sec"<<endl;
    return 0;
}
