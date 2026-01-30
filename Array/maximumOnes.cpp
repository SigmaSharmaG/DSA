#include <iostream>
using namespace std;

int bruteForce(int arr[],int n){
    int max = 0;
    int count = 0;

    for (int i=0;i<n;i++){
        if (arr[i]==1){
            count+=1;
            if (count>max){
                max = count;
            }
        }

        else{
            count = 0;

        }
    }

    return max;
}


int main(){
    int arr[9] = {1,1,0,1,1,1,0,1,1};

    cout << bruteForce(arr,9);

    return 0;
}