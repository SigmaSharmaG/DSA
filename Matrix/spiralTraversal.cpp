#include <iostream>
#include <vector>
using namespace std;

void spiralTrav(int arr[][4], int m, int n)
{
    int left = 0;
    int right = m - 1;
    int top = 0;
    int bottom = n - 1;
    vector<int> v = {};

    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            v.push_back(arr[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            v.push_back(arr[i][right]);
        }
        right--;

        if (top <= bottom){
            for (int i = right; i >= left; i--)
        {
            v.push_back(arr[bottom][i]);
        }
        bottom--;
        }

        if (left <= right){
            for (int i = bottom; i <= top; i++)
        {
            v.push_back(arr[i][left]);
        }
        left++;
        }
    }

    for (int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}

int main()
{
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    spiralTrav(arr, 4, 4);

    return 0;
}