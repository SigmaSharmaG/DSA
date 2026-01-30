#include <iostream>
using namespace std;

int bruteForce(int arr[],int n,int k){
    for (int i=0;i<n;i++){
        if (arr[i]==k){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[5] = {6,7,8,4,1};

    cout << bruteForce(arr,5,4);

    return 0;
}