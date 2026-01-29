#include <iostream>
#include <vector>
#include <map>
using namespace std;

int bruteForce(vector<int>arr){
    // Time complexity - n^2
    // Space complexity - 1
    int ans = 0;
    int n = arr.size();

    for (int i=0;i<n;i++){
        int observed_app = 0;
        
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                observed_app++;
            }
        }

        if (observed_app>n/2){
            // ans = observed_app;
            return arr[i];
        }
    }

    return -1;

}

int betterSol(vector<int>arr){
    // Time complexity - nlogn
    // Space complexity - n

    map <int,int> mpp;
    for (int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }

    for (auto it:mpp){
        if (it.second>=arr.size()/2){
            return it.first;
        }
    }

    return -1;
}

int optimalSol(vector<int>arr){
    // Time complexity - 2n
    // Space complexity - 1

    // Moore Voting Algorithm
    int count = 0;
    int element;

    for (int i=0;i<arr.size();i++){
        if (count==0){
            count=1;
            element = arr[i];
        }
        else if (arr[i]==element){
            count++;
        }
        else{
            count--;
        }
    }

    int count2 = 0;
    for (int i=0;i<arr.size();i++){
        if (arr[i]==element){
            count2++;
        }
    }
    if (count2>arr.size()/2){
        return element;
    }

    return -1;
}

int main(){
    vector <int> arr = {2,2,3,3,1,2,2};

    cout << bruteForce(arr);
    // cout << betterSol(arr);
    cout << optimalSol(arr);

    return 0;
}

