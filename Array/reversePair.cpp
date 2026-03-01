#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<int>> arr){
    int n = arr.size();
    for (int i=0;i<n;i++){
        for (int j=0;j<2;j++){
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}

void bruteForce(vector<int> arr){
    int n = arr.size();
    vector<vector<int>> ans;

    int count = 0;
    for (int i=0;i<n;i++){
        // vector <int> temp;
        for (int j=i;j<n;j++){
            if (arr[i] > 2 * arr[j]){
                ans.push_back({arr[i],arr[j]});
                count++;
            }


        }
    }

    display(ans);
}

int countPairs(vector<int> arr,int low,int mid,int high){
    int right = mid+1;
    int c = 0;
    for (int i=low;i<mid;i++){
        while (right <= high && arr[i]> 2*arr[right]){
        
            c += (right-(mid+1));
        }
    }

    return c;
}

void optimalSol(vector<int> arr){
    
    int low = 0;
    int high = arr.size()-1;

    // return mergeSort(arr,low,high);
}

int main(){
    vector <int> arr = {40,25,19,12,9,6,2};

    bruteForce(arr);

    return 0;
}