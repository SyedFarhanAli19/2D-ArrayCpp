#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
//given a boolean 2d array, where each row is sorted.
//find the row with the maximun number of 1s.
//35:50
int leftMostOneRow(vector<vector<int>> &vec)
{
    int leftMostOne = -1;
    int maxOnesRow = -1;
    int j = vec[0].size() - 1;

    while (j >= 0 && vec[0][j] == 1)
    {
        leftMostOne = j;
        maxOnesRow = 0;
        j--;
    }
    for (int i = 1; i < vec.size(); i++)
    {
        while (j >= 0 && vec[i][j] == 1)
        {
            leftMostOne = j;
            j--;
            maxOnesRow = i;    
        }
        
    }
    return maxOnesRow;
}

int maximumOnesRow(vector<vector<int>> &vec1)
{

    int maxOnes = INT_MIN;
    int maxOnesRow = -1;
    int colums = vec1[0].size();
    for (int i = 0; i < vec1.size(); i++)
    {
        for (int j = 0; j < vec1[i].size(); j++)
        {
            if (vec1[i][j] == 1)
            {
                int numberOfOnes = colums - j;
                if (numberOfOnes > maxOnes)
                {
                    maxOnes = numberOfOnes;
                    maxOnesRow = i;
                }
                break;
            }
            
        }
        
    }
    return maxOnesRow;
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
    cout << "Result = "<< result << endl;
    return 0;
}