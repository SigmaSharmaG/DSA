#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;


int bruteForce(vector<int> a){
    // Time complexity - n^3
    // Space complexity - 1
    int maxSum = INT_MIN;
    for(int i=0;i<a.size();i++){
        for (int j=i;j<a.size();j++){
            int sum = 0;
            for (int k=i;k<j;k++){
                sum += a[k];
            }

            if (sum>maxSum){
                maxSum = sum;
            }
        }
        
    }

    return maxSum;
}

int betterSol(vector<int> a){
    // Time complexity - n^2
    // Space complexity - 1

    int maxSum = INT_MIN;
    for(int i=0;i<a.size();i++){
        int sum = 0;
        for (int j=i;j<a.size();j++){
            sum += a[j];

            if (sum>maxSum){
                maxSum = sum;
            }
        }
    }

    return maxSum;
}

int optimalSol(vector<int> a){
    // Time complexity - n;
    // Space complexity - 1;

    // Kadence Algorithm
    int sum = 0;
    int max = INT_MIN;

    int ansStart = -1;
    int ansEnd = -1;
    int start = -1;

    for (int i=0;i<a.size();i++){

        if (sum==0){
            start = i;
        }

        sum+=a[i];

        if (sum>max){
            max = sum;
            ansStart = start; 
            ansEnd = i;
        }

        if (sum<0){
            sum = 0;
        }

    }

    cout << ansStart << " " <<ansEnd;


    return max;
}



int main(){
    vector <int> arr = {-2,-3,4,-1,-2,1,5,-3};

    // cout << bruteForce(arr);
    // cout << betterSol(arr);
    cout << optimalSol(arr);

    return 0;
}