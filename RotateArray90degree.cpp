#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//given a square matrix, turn it by 90 degrees in a clockwise direction
//without using any extra space
void rotateArray(vector<vector<int>>&vec)
{
    int size = vec.size();

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(vec[i][j],vec[j][i]);
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
        reverse(vec[i].begin(),vec[i].end());
    }
    

}
int main()
{
    int size;
    cout << "Enter size of square array" << endl;
    cin >> size;

    vector<vector<int>> vec(size,vector<int>(size));
    
    //Input section
    cout << "Enter elements of array" << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> vec[i][j];
        }
        
    }

    rotateArray(vec);

    cout << "Output" << endl;
    //output section
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}