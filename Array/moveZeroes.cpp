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
    int temp[10];
    int j = 0;

    for (int i=0;i<n;i++){
        if (arr[i]!=0){
            temp[j] = arr[i];
            j++; 
        }
    }

    for (int k=0;k<j;k++){
        arr[k] = temp[k];
    }

    for (int k=j;k<n;k++){
        arr[k] = 0;
    }

    display(arr,n);
}

void optimal(int arr[],int n){
    int j = -1;
    
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            j = i;
            break;
        }
    }

    if (j == -1){

    }
    else{
        for (int i=j+1;i<n;i++){
            
            if (arr[i]!=0){
                // Swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j++;
            }
        }
    }

    display(arr,10);

}
int main(){
    int arr[10] = {1,0,2,3,2,0,0,4,5,1};

    // bruteForce(arr,10);
    optimal(arr,10);

    return 0;
}