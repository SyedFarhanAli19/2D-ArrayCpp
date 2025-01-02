#include<iostream>
#include<vector>
using namespace std;
//given a matrix a ,print the values of a in a spiral pattern
void spiralOrder(vector<vector<int>>&vec)
{
    int left = 0;
    int right = vec[0].size() - 1 ;
    int top = 0;
    int bottom = vec.size() - 1;

    int direction = 0;

    while(left <= right && top <= bottom){
        //left -> right
        if (direction == 0)
        {
            for (int col = left; col <= right; col++)
            {
                cout << vec[top][col] << " ";
            }
            top++;
        }
        //top -> bottom
        else if (direction == 1)
        {
            for(int row = top; row <= bottom; row++)
            {
                cout << vec[row][right] << " ";
            }
            right--;
        }
        //right -> left
        else if (direction == 2)
        {
            for (int col = right; col >= left; col--)
            {
                cout << vec[bottom][col] << " ";
            }
            bottom--;
        }
        //bottom -> top
        else{
            for (int row = bottom; row >= top; row--)
            {
                cout << vec[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4; //so that the value of direction stays between 0 -> 3
    }
    
    
}

int main()
{
    int row, column;
    cout << "Enter row and column" << endl;
    cin >> row >> column;
    vector<vector<int>> vec(row,vector<int>(column));
    
    //input
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> vec[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    

    spiralOrder(vec);
    return 0;
}