#include <iostream>
using namespace std;

void insertionSort(int arr[],int n){
    for (int i=0;i<=n-1;i++){
        int j = i;
        
        while (j>0 && arr[j-1]>arr[j]){
            // swap
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
            
            
        }
    }

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}

int main(){
    // int n;
    // cin >> n;
    int arr[7] = {6,5,4,3,2,1,0};

    insertionSort(arr,7);

    return 0;
}