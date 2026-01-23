#include <iostream>
using namespace std;

int main(){
    int arr[6] = {13,46,24,52,20,9};
    
    for (int i=0;i<4;i++){
        int min = arr[i];
        for (int j=i;j<=5;j++){
            cout << j << "";
            if (arr[j]<min){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        cout << endl;
    }

    for (int i=0;i<5;i++){
        cout << arr[i] << " ";
    }




    return 0;
}