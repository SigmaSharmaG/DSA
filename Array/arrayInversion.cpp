#include <iostream>
#include <vector>
using namespace std;

int bruteForce(vector<int> arr){
    int c = 0;
    for (int i=0;i<arr.size()-1;i++){
        for (int j=i+1;j<arr.size();j++){
            if (arr[i]>arr[j]){
                c++;
            }
        }
    }

    return c;
}

int main(){
    vector<int> arr = {5,4,3,2,1};

    cout << bruteForce(arr);

    return 0;
}