#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_map>
using namespace std;


void bruteForce(vector<int> arr){
    // Time complexity - n^3 + log(unique element)
    // Space complexity - 2*(no of triplet)

    vector<vector<int>> ans;
    set <vector<int>> st;

    int n = arr.size();
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            for (int k=j+1;k<n;k++){
                if (arr[i]+arr[j]+arr[k]==0){
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());


}

void betterSol(vector<int> arr){
    // Time complexirty - n2 X logM
    // Space complexity - n + 2X(no of unique element)
    set <vector<int>> st;

    int n = arr.size();
    for (int i=0;i<n;i++){
        set <int> hashset;
        for (int j=i+1;j<n;j++){
            int k = -(arr[i]+arr[j]);
            if (hashset.find(k)!=hashset.end()){
                vector <int> temp = {arr[i],arr[j],arr[k]};
                
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            
            hashset.insert(arr[j]);
        }
        
    }
}

void optimalSol(vector<int> arr){
    // Time complexity - nlogn + n^2
    // Space complexity - (no of unique element)
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());

    int n = arr.size();
    for (int i=0;i<n;i++){
        if (i>0 && arr[i] == arr[i-1]){
            continue;
        }
        int j = i+1;
        int k = n-1;

        while (j<k){
            int sum = arr[i]+arr[j]+arr[k];

            if (sum<0){
                j++;
            }
            else if (sum>0){
                k--;
            }

            else{
                vector <int> temp = {arr[i],arr[j],arr[k]};

                ans.push_back(temp);
                j++;
                k--;

                while(j<k && arr[j]==arr[j-1]){
                    j++;
                }

                while(j<k && arr[k]==arr[k+1]){
                    k--;
                }

            }

        }
    }
}

int main(){
    vector <int> arr = {-1,0,1,2,-1,-4};

    bruteForce(arr);

    return 0;
}