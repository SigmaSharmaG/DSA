#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <unordered_set>

using namespace std;

void display(vector<int>arr){
    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " ";

    }
}

void bruteForce(vector<int>arr){
    int nextStatus = 1; 
    int i = 0;
    int n = arr.size();
    int nextConsequtiveno = arr[i]+1;
    int seq_len = 1;
    while (nextStatus == 1 && i<arr.size()){
        for (int j=0;i<arr.size();j++){
            if (arr[j]==nextConsequtiveno){
                seq_len++;
                nextConsequtiveno++;
                break;
            }
        
        
    }
    }
}

void betterSol(vector<int>arr){
    // Time complexity - n + nlogn
    // Space complexity - 1;
    int count = 0;
    int lastElement = INT_MIN;
    int longest = 0;
    vector <int> longestConseqarr;
    sort(arr.begin(),arr.end());

    for (int i=0;i<arr.size();i++){
        if (arr[i]-1==lastElement){
            lastElement = arr[i];
            count++;
            
            
        }
        else if (arr[i]==lastElement){

        }
        else{
            lastElement = arr[i];
            count = 1;
            
        }

        if (longest<count){
            longest = count;
        }
    }

    cout << longest;

    
}

void optimalSol(vector<int>arr){
    // Time complexity - n+2n
    // Space complexity - n
    unordered_set<int> s;

    int longest = 1;

    for (int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }

    for (auto it : s){
        if (s.find(it - 1) == s.end() ){
            int c = 1;
            int x = it;

            while (s.find(x+1)!=s.end()){
                x = x+1;
                c = c+1;
            }

            longest = max(longest,c);
        }
    }

    cout << longest;
}
int main(){
    vector<int> arr = {102,4,100,1,101,3,2,1,1};

    // bruteForce(arr);
    // betterSol(arr);
    optimalSol(arr);

    return 0;
}