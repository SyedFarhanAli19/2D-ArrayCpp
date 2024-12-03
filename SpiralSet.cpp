#include<iostream>
#include<vector>
using namespace std;
// given a positive integer n generate an nxn matrix filled with number from 1 to n^2 in spiral order
void spiralSet(vector<vector<int>>&vec)
{

    int limit = (vec.size()*vec.size());
    int currentElement = 1;

    
}
int main()
{
    int size;
    cout << "Enter size of matrix" << endl;
    cin >> size ;

    vector<vector<int>>vec(size,vector<int>(size));
    
    spiralSet(vec);

    return 0;
}