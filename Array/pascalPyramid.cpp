#include <iostream>
#include <vector>
using namespace std;


void optimalSol(int rows){
    vector<vector<int>> ansRow;

    
    for (int row = 1;row<=rows;row++){
        int ans = 1;
        vector<int> ansCols;
        ansCols.push_back(1);
        for (int col = 1;col<row;col++){
            ans = ans * (row-col);
            ans = ans / col;
            // cout << ans << " ";
            ansCols.push_back(ans);
        }

        // for (int i=0;i<ansCols.size();i++){
        //     cout << ansCols[i] << " ";
        // }
        // cout << endl;
        


        ansRow.push_back(ansCols);
    }


}


int main(){
    int rows = 5;
    
    optimalSol(rows);
}