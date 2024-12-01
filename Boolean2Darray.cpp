#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
//given a boolean 2d array, where each row is sorted.
//find the row with the maximun number of 1s.

int maximumOnesRow(vector<vector<int>> &vec1)
{

    int maxOnes = INT_MIN;
    int maxOnesRow = -1;

    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1[i].size(); j++)
        {
            
        }
        
    }
    
}
int main()
{
    int row,column;
    cout << "Enter row and column" << endl;
    cin >> row >> column;

    vector<vector<int>> vec(row,vector<int>(column));
    cout << "Enter 0s and 1s in sorted order" << endl;
    for (int i = 0; i < row; i++)//input loop
    {
        for (int j = 0; j < column; j++)
        {
            cin >> vec[i][j];
        }
    }
    
    int result = maximumOnesRow(vec);
    cout << result << endl;
    return 0;
}