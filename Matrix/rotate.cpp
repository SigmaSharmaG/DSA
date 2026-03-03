#include <iostream>
#include <algorithm>
using namespace std;


void display(int arr[][4],int m,int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

void bruteForce(int arr[][4],int m,int n){
    // Time complexity - n^2
    // Space complexity - n^2

    int a[4][4] = {0};

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            a[j][(n-1-i)] = arr[i][j];
        }
    }

    display(a,4,4);

}

void betterSol(int arr[][4],int m,int n){
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            if (i<j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }  
    
    for (int i=0;i<m;i++){
        for (int j=0;j<n/2;j++){
            swap(arr[i][j],arr[i][(n-1)-j]);
        }
    }

    display(arr,4,4);
}

int main(){
    int arr[4][4] = {
    {1,  2,  3,  4},
    {5,  6,  7,  8},
    {9, 10, 11, 12},
    {13,14, 15, 16}
};

    // bruteForce(arr,4,4);
    betterSol(arr,4,4);

    return 0;
}