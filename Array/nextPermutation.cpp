#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void display(vector<int> arr){
    for (int i=0;i<arr.size();i++){
        cout << arr[i] << " ";

    }
}

void optimalSol(vector<int> arr)
    // Time complexity - 3n;
    // Space complexity - 1;

{
    int ind = -1;
    // Find the last dip
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            ind = i;
            break;
        }
    }

    if (ind == -1)
    {
        reverse(arr.begin(), arr.end());
    }

    else
    {
        // Find the just big number
        for (int i = arr.size() - 1; i > ind; i--)
        {
            if (arr[i] > arr[ind])
            {
                swap(arr[i], arr[ind]);
            }
        }

        reverse(arr.begin()+ind+1,arr.end());
    }

    display(arr);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    optimalSol(arr);

    return 0;
}