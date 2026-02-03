#include <iostream>
#include <set>
using namespace std;


void bruteForce(int arr[],int n){
    // Time complexity - nlogn + n
    // Space complexity - n

    set <int> s;

    for (int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    int index = 0;
    for (auto it:s){
        arr[index] = it;
        index++;
    }

    for (int i=0;i<index;i++){
        cout << arr[i] << " ";
    }




}

int optimalSol(int arr[],int n){
    // Time complexity - n
    // Space complexity - 1
    int i = 0;
    
    for (int j=1;j<n;j++){
        if (arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;

        }
    }

    return i+1;
}

int main(){
    int arr[7] = {1,1,2,2,2,3,3};
    bruteForce(arr,7);
    // cout << betterSol(arr,5);
    // cout << optimalSol(arr,5);

    return 0;
}