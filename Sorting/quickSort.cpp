#include <iostream>
using namespace std;

int divide(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i<j){
        while (arr[i]<=pivot && i<=high - 1){
            i++;
        }
        while (arr[j]>pivot && j>=low + 1){
            j--;
        }

        if (i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quickSort(int arr[],int low,int high){
    if (low < high){
        int partition_index = divide(arr,low,high);
        quickSort(arr,low,partition_index-1);
        quickSort(arr,partition_index+1,high);

    }


}

int main(){
    int arr[9] = {4,6,2,5,7,9,1,3,10};
    quickSort(arr,0,8);

    for (int i=0;i<9;i++){
        cout << arr[i] << " ";

    }

    return 0;
}