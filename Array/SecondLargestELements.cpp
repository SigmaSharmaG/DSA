#include <iostream>
using namespace std;

int bruteForce(int arr[],int n){
    // Sort & return the last element
    // Using any sorting algorithm 

    // Here i used bubble sort
    // Time complexity - n^2 + n

    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }
    }

    int secondLargest;
    for (int i=n-1;i>=0;i--){
        if (arr[i]!=arr[n-1]){
            secondLargest = arr[i];
        }
    }

    return secondLargest;

}

int betterSol(int arr[],int n){
    // Time complexity - 2n
    int max = arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max = arr[i];

        }
    }

    int secondLargest = -1;
    for (int i=0;i<n;i++){
        if (arr[i]>secondLargest && arr[i]!=max){
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int optimalSol(int arr[],int n){

    // Time complexity - n
    int largest = arr[0];
    int secondLargest = -1;


    for (int i=0;i<n;i++){
        if (arr[i]>largest){
            int temp = largest;
            largest = arr[i];
            secondLargest = temp;
        }
    }

    return secondLargest;
}



int main(){
    int arr[5] = {3,2,1,5,2};
    // cout << bruteForce(arr,5);
    // cout << betterSol(arr,5);
    cout << optimalSol(arr,5);

    return 0;
}