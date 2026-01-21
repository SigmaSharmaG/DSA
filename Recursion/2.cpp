#include <iostream>
using namespace std;

// Parameterised and Functional Recursion

int sumOfNumber(int i){
    if (i==0){
        return 0;
    }
    
    return i+sumOfNumber(i-1);
}

int factorial(int n){
    if (n==1){
        return 1;
    }

    return n*factorial(n-1);
}

int main(){
    // cout << sumOfNumber(10);
    cout << factorial(5);
    return 0;

}
