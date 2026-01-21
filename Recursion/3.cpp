#include <iostream>
#include <string>
using namespace std;

void reverseArray(int i,int arr[],int n){
    if (i>=n/2){
        return;
    }
    
    // Swap
    int temp = arr[i];
    arr[i] = arr[n-i-1];
    arr[n-i-1] = temp;

    return reverseArray(i+1,arr,n);
}

int isPalindrome(int i,char str[],int n){
    if (i>=n/2){
        return 1;
    }
    if (str[i]!=str[n-i-1]){
        return 0;
    }

    return isPalindrome(i+1,str,n);
}


int main(){
    // int n;

    // cin>>n;
    // int arr[n];

    // for (int i=0;i<n;i++){
    //     cin >> arr[i];
    // }
    // reverseArray(0,arr,n);

    // for (int i=0;i<n;i++){
    //     cout << arr[i] << " ";
    // }

    char str[] = "noon";
    cout << isPalindrome(0,str,4);

    return 0;
}