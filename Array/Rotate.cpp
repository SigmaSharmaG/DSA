#include <iostream>
#include <set>
using namespace std;


void betterSol(int arr[],int n,int k){
    // Time complexity - n
    // Space complexity - 1
    
    // For k = 1 or to rotate by 1
    // if (k==1){
    //     int temp = arr[0];
    //     for (int i=1;i<n;i++){
    //         arr[i-1] = arr[i];
    //     }

    //     arr[n-1] = temp;
    // }

    // For general
    // Time complexity - n + k 
    // Space complexity - 1

    k = k%n;
    int temp[3];
    // Getting the k's elements
    for (int i=0;i<k;i++){
        temp[i] = arr[i];
    } 
    // Shifting
    for (int i=k;i<n;i++){
        arr[i-k] = arr[i]; 
    }

    // Put back the temp
    int j = 0;
    for (int i=n-k;i<n;i++){
        // arr[i] = temp[j];
        // j++;

        // Eleminating j
        arr[i] = temp[i-(n-k)];
        
    }


    
}

void reverse(int arr[],int start,int end){
    while (start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void optimalSol(int arr[],int n,int k){
    // Time complexity - 2n
    // Space complexity - 1
    // reverse(0,k)
    // reverse(k,n)
    // reverse(0,n)

    reverse(arr,0,n-k-1);
    reverse(arr,n-k,n-1);
    reverse(arr,0,n-1);

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }


}

int main(){
    int arr[5] = {1,2,3,4,5};
    // cout << betterSol(arr,5);
    optimalSol(arr,5,1);

    return 0;
}