#include<iostream>
using namespace std;
//write a program to find the transpose of a matrix
int main()
{
    int row ,column;
    cout << "Enter row and column" << endl;
    cin >> row >> column;

    int arr1[row][column];
    int arr2[column][row];

    for (int i = 0; i < row; i++)//input
    {
        for (int j = 0; j < column; j++)
        {
            cin >> arr1[i][j];
            arr2[j][i] = arr1[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < column; i++)//output
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}