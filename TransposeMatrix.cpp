#include<iostream>
using namespace std;
//write a program to find the transpose of a matrix

int main()
{
    int row ,column;
    cout << "Enter row and column" << endl;
    cin >> row >> column;
    int array[row][column];
    //input 
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> array[i][j];
        }
        
    }
    
    //processing
    int transpose[column][row];
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            transpose[i][j] = array[j][i];
        }
        
    }
    
    //output section
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}