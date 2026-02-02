#include <iostream>
using namespace std;


void display(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

void bruteForce(int arr[],int n){
    // Time complexity - 2n
    // Space complexity - n

    int pos[3];
    int neg[3];
    int s = 0;
    int t = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos[s] = arr[i];
            s++;
        }

        else{
            neg[t] = arr[i];
            t++;
        }
    }

    s = 0;
    t = 0;
    for(int i=0;i<n/2;i++){
        if(i%2==0){
            arr[i] = pos[s];
            s++;
        }
        else{
            arr[i] = neg[t];
            t++;
        }
    }

    display(arr,n);
}

void optimalSol(int arr[],int n){
    
    int arr2[6];
    int positive_index = 0;
    int negetive_index = 1;
    for (int i=0;i<n;i++){
        if (arr[i]>0){
            arr2[positive_index] = arr[i];
            positive_index+=2;
        }
        else{
            arr2[negetive_index] = arr[i];
            negetive_index+=2;
        }
    }

    display(arr2,n);
}

int main(){
    int arr[6] = {3,1,-2,-5,2,-4};

    // bruteForce(arr,6);
    optimalSol(arr,6);

    return 0;
}