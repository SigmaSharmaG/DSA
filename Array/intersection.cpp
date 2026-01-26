#include <iostream>
#include <set>
#include <vector>
using namespace std;


void bruteForce(vector<int>a,vector<int>b){
    // Time complexity - n1xn2
    // Space complexity - 

    int visited[100] = {0};
    vector <int> intersection;

    for (int i=0;i<a.size();i++){
        for (int j=0;j<b.size();j++){
            if (a[i]==b[j] && visited[j]==0){
                intersection.push_back(a[i]);
                visited[j] = 1;
                break;

            }

            if (b[j]>a[i]) break;
        }
    }

    for (int i=0;i<intersection.size();i++){
        cout << intersection[i] << " ";

    }
    

}



void optimalSol(vector<int>a,vector<int>b){
    // Time complexity - n1 + n2
    // Space complexity - 1
    
    int i=0;
    int j=0;
    vector <int> intersection;
    int n = a.size();
    int m = b.size();

    while(i<n && j<m){
        if (a[i] < b[j]){
            i++;
        }

        else if (b[j] < a[i]){
            j++;
        }

        else if (a[i] == b[j]){
            intersection.push_back(a[i]);
            i++;
            j++;

        }
    }

    for (int i=0;i<intersection.size();i++){
        cout << intersection[i] << " ";

    }
    

}

int main(){
    // vector <int> a = {1,2,2,3,3,4,5,6};
    // vector <int> b = {2,3,3,5,6,6,7};

    vector <int> a = {1,12,21,31};
    vector <int> b = {1,4,13,21,};


    // bruteForce(a,b);
    optimalSol(a,b);

    return 0;
}