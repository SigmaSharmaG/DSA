#include <iostream>
using namespace std;

int bruteForce(int arr[],int n){
    // Sort & return the last element
    // Using any sorting algorithm 

    // Here i used bubble sort
    // Time complexity - n^2

    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }

    return arr[n-1];
}

int optimalSol(int arr[],int n){
    // Time complexity - n
    int max = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max = arr[i];

        }
    }

    return max;
}



int main(){
    int arr[5] = {3,2,1,5,2};
    cout << bruteForce(arr,5);

    return 0;
}