#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

void bruteForce(vector<int> arr){
    // Time complexity - n^4
    // Space complexity - (no of pairs)
    int n = arr.size();
    vector<vector<int>> ans;
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            for (int k=j+1;k<n;k++){
                for (int l=k+1;l<n;l++){
                    if (arr[i]+arr[j]+arr[k]+arr[l]==0){
                        vector <int> temp = {arr[i],arr[j],arr[k],arr[l]};
                        sort(temp.begin(),temp.end());
                        ans.push_back(temp);
                    }
                }
            }
        }

    }

    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[0].size();j++){
            cout << ans[i][j] << " ";
        }

        cout << endl;
    } 
}

void betterSol(vector<int> arr){
    vector<vector<int>> ans;
    int n = arr.size();
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            set <int> hashset;
            for (int k=j+1;k<n;k++){
                int l = -(arr[i]+arr[j]+arr[k]);
                if (hashset.find(l)!=hashset.end()){
                    vector <int> temp = {arr[i],arr[j],arr[k],arr[l]};
                    sort(temp.begin(),temp.end());
                    ans.push_back(temp);

                }
                hashset.insert(k);

            }
        }
    }

    for (int i=0;i<ans.size();i++){
        for (int j=0;j<ans[0].size();j++){
            cout << ans[i][j] << " ";
        }

        cout << endl;
    }
}

int main(){
    vector<int> arr = {1,0,-1,0,-2,2};

    // bruteForce(arr);
    betterSol(arr);

    return 0;
}