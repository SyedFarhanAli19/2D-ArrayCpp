#include<iostream>
using namespace std;
//write a program to display the multiplication of 
//two matrices entered by the user
//haven't fully understood as of 30th november 2024
int main()
{
    int r1,c1;
    cout << "Enter R1 and C1" << endl;
    cin >> r1 >> c1;  

    int array1[r1][c1];
    for (int row = 0; row < r1; row++)//to take input of 1st array
    {
        for (int column = 0; column < c1; column++)
        {
            cin >> array1[row][column];
        }
    }
    
    int r2,c2;
    cout << "Enter R2 and C2" << endl;
    cin >> r2 >> c2;  

    int array2[r2][c2];
    for (int row = 0; row < r2; row++)//to take input of 2nd array
    {
        for (int column = 0; column < c2; column++)
        {
            cin >> array2[row][column];
        }
    }
    
    if (c1 != r2)
    {
        cout << "Error bad size" << endl;
        return 0;
    }
    int array3[r1][c2];
    for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                int value = 0;
                for (int k = 0; k < r2; k++)
                {
                    value+=array1[i][k]*array2[k][j];
                }
                array3[i][j] = value;
            }
        }

    for (int i = 0; i < r1; i++)//to print output
    {
        for (int j = 0; j < c2; j++)
        {
            cout << array3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}