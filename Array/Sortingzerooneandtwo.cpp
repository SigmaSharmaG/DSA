#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

void bruteForce(vector <int> a){
    // Using merge sort
}

void betterSol(vector <int> a){
    // Time complexity - 2n
    // Space complexity - 1
    int one = 0;
    int two = 0;
    int zero = 0;

    for (int i=0;i<a.size();i++){
        if (a[i]==0){
            zero++;
        }
        else if (a[i]==1){
            one++;
        }
        else{
            two++;
        }
    }

    for (int i=0;i<zero;i++){
        a[i] = 0;
    }
    for (int i=zero;i<zero+one;i++){
        a[i] = 1;
    }
    for (int i=zero+one;i<zero+one+two;i++){
        a[i] = 2;
    }

    for (int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
}

void optimalSol(vector <int> a){
    // Time complexity - n
    // Space complexity - 1
    int low = 0;
    int mid = 0;
    int high = a.size()-1;
    while (mid<=high){
        if (a[mid]==0){
            swap(a[low],a[mid]);
            low++;
            mid++;
        }

        else if(a[mid]==1){
            mid++;

        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }

    for (int i=0;i<a.size();i++){
        cout << a[i] << " ";

    }
}


int main(){
    vector <int> a = {0,1,2,0,1,2,0,0,2,1,1,0};

    // bruteForce(a);
    // betterSol(a);
    optimalSol(a);

}
