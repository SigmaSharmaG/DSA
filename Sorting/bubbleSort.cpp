#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int arr[6] = {13,9,20,24,46,52};

    for (int i=0;i<n;i++){
        int didswap = 0;
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

        if (didswap==0){
            break;
        }
        
    }

    for (int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}