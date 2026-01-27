#include <iostream>
#include <vector>
using namespace std;

void display(vector<int>arr){
    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}

void bruteForce(vector<int> arr){

    // Time complexity - n^2
    // Space complextiy - n
    vector<int> leaders;

    for (int i=0;i<arr.size();i++){
        int leader = 1;
        for (int j=i+1;j<arr.size();j++){
            if (arr[j]>arr[i]){
                leader = 0;
                break;
            }
        }

        if (leader==1){
            leaders.push_back(arr[i]);
        }
    }

    display(leaders);
}

void optimalSol(vector<int> arr){
    // Time complexity - n
    // Space complextiy - n
    int max = 0;
    vector<int> leaders;
    for (int i=arr.size()-1;i>=0;i--){
        if (arr[i]>max){
            max = arr[i];
            leaders.push_back(max);

        }
    }

    display(leaders);
}

int main(){
    vector <int> arr = {12,22,10,3,6,0};
    // vector <int> arr = {22,12,10,6,3,0};

    // bruteForce(arr);
    optimalSol(arr);

    return 0;
}