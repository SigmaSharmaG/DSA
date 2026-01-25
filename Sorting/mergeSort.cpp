#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> &arr,int low,int mid,int high){

    vector <int> temp;
    int left = low;
    int right = mid+1;

    while (left<=mid && right<=high){
        if (arr[left]<=arr[right]){
            // Add on temp on left
            temp.push_back(arr[left]);
            left++;
        }

        else{
            // Add on temp on right
            temp.push_back(arr[right]);
            right++;
        }
    }

    // For remaining in left
    while (left<=mid){
        // Add on temp on left
        temp.push_back(arr[left]);
        left++;
    }

    // For remaining in right
    while (right<=high){
        // Add on temp on right
        temp.push_back(arr[right]);
        right++;
    }

    for (int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }

}
void mergeSort(vector <int> &arr,int low,int high){

    if (low>=high){
        return;
    }

    int mid = (low + high)/2;
    
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);

    merge(arr,low,mid,high);
    

}

int main(){
    vector <int> arr = {3,1,2,4,1,5,2,6,4};
    mergeSort(arr,0,8);

    for (int i=0;i<9;i++){
        cout << arr[i] << " ";
    }

}