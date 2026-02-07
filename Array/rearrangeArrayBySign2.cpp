#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> arr){
    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " ";

    }
}

void optimalSol(vector<int> arr){
    // Time complexity - 2n;
    // Space complexity - 1;

    vector <int> pos;
    vector <int> neg;

    for (int i=0;i<arr.size();i++){
        if (arr[i]>0){
            pos.push_back(arr[i]);
        }
        
        else{
            neg.push_back(arr[i]);
        }
    }

    if (neg.size()<pos.size()){
        for (int i=0;i<neg.size();i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }

        int index = 2*neg.size();
        for (int i=neg.size();i<pos.size();i++){
            arr[index] = pos[i];
            index++;
        }
    }

    else{
        for (int i=0;i<pos.size();i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }

        int index = 2*pos.size();
        for (int i=pos.size();i<neg.size();i++){
            arr[index] = neg[i];
            index++;
        }

    }

    display(arr);
}

int main(){
    vector <int> arr = {1,2,-4,-5,5,6};
    
    optimalSol(arr);
}