#include <iostream>
using namespace std;

void printNumber(int i,int n)
{
    if (i>n){
        return;
    }
    // printf("%d\n",i);
    cout << "Garvit\n";
    printNumber(i+1,n);
}

void printReverse(int n){
    if (n==0){
        return;
    }
    cout << n << "\n" ;
    printReverse(n-1);
}

void backtrack(int i,int n){
    if (i>n){
        return;
    }
    backtrack(i+1,n);
    cout << i << endl;
}
int main(){
    // printNumber(1,10);
    // printReverse(10);
    backtrack(1,10);

    return 0;
}