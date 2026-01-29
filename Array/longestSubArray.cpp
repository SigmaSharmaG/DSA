#include <iostream>
#include <vector>
#include <map>
using namespace std;

int bruteForce(vector<int> arr,int s){

    int longestLenght = 0;
    for (int i=0;i<arr.size();i++){
        for (int j=i;j<arr.size();j++){
            int sum = 0;
            for (int k=i;k<j;k++){
                sum+=arr[k];
                // cout << sum << endl;
                if (sum==s){
                    int lenght = j-i+1;
                    if (lenght>longestLenght){
                        longestLenght = lenght;
                    }
                }

            }

            
        }
    }

    return longestLenght;
}

void betterSol(vector<int> arr,int s){
    int longestLenght = 0;
    for (int i=0;i<arr.size();i++){
         int sum = 0;
         for (int j=i;j<arr.size();j++){
            sum+=arr[j];
            if (sum==s){
                int lenght = j-i+1;
                if (lenght>longestLenght){
                    longestLenght = lenght;
                    cout << longestLenght << endl;

                }
                
            }


         }
    }
}

int betterSol2(vector<int> arr,int s){
    // Time complexity - nlogn (ordered map)
    // n (unordered map)

    // Optimal for both positive and negetive no.element
    map<long long,int> preSumMap;
    long long sum = 0;
    int maxLen = 0;

    for (int i=0;i<arr.size();i++){
        sum+=arr[i];
        if (sum==s){
            int lenght = i+1;
            if (lenght>maxLen){
                maxLen = lenght;
            }
        }

        long long rem = sum - s;
        if (preSumMap.find(rem)!=preSumMap.end()){
            int len = i - preSumMap[rem];
            if (len>maxLen){
                maxLen = len;
            }
        }

        if (preSumMap.find(sum) == preSumMap.end()){
            preSumMap[sum] = i;
        }

    }

    return maxLen;

}

int optimalSol(vector<int> arr,int s){
    // Time complexity - 2n
    // Space complexity - 1
    int left = 0;
    int right = 0;
    int sum = arr[0];
    int n = arr.size();
    int maxLen = 0;

    while (right<n){
        while (left<=right && sum>s){
            sum-=arr[left];
            left++;
        }

        if (sum == s){
            int lenght = right-left+1;
            if (lenght>maxLen){
                maxLen = lenght;
            }
        }

        right++;
        if (right<n){
            sum+=arr[right];
        }
    }


    return maxLen;

}

int main(){
    vector <int> arr = {1,2,2,3,1,1,1,1,4,2};
    // cout << bruteForce(arr,4);

    betterSol(arr,4);
    // cout << optimalSol(arr,4);

    return 0;
}