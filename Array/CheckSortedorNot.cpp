#include <iostream>
using namespace std;


int optimalSol(int arr[],int n){
    for (int i=1;i<n;i++){
        if (arr[i]>=arr[i-1]){
            
        }

        else{
            return false;
        }
    }

    return true;
}



int main(){
    int arr[5] = {3,2,1,5,2};
    // cout << bruteForce(arr,5);
    // cout << betterSol(arr,5);
    cout << optimalSol(arr,5);

    return 0;
}