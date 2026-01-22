#include <iostream>
#include <map>
using namespace std;

int main(){
    char arr[5] = {'a','a','b','c','c'};
    
    // Using array as frequency generator
    int hash[256] = {0};

    // for (int i=0;i<5;i++){
    //     hash[arr[i]]++;
    // }

    // for (int i=0;i<256;i++){
    //     if (hash[i]!=0)
    //     cout << (char)i << " => " << hash[i] << endl;
    // }

    // Using Map
    map<char,int> mpp;
    for (int i=0;i<5;i++){
        mpp[arr[i]]++;
    }

    for (auto it : mpp){
        cout << it.first << " " << it.second << endl;
    }



    return 0;
}