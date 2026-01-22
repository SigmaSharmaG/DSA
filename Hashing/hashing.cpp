#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[5];

    for (int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[5] = {0};

    for (int i=0;i<n;i++){
        hash[arr[i]] += 1;

    }

    for (int i=0;i<n;i++){
        cout << "Frequency of " << i << " is : "<< hash[i] << endl;

    }

    return 0;
}