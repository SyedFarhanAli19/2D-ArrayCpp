#include<iostream>
#include<vector>
using namespace std;
//given an integer n , return the first n rows of pascal's triangle.

vector<vector<int>> pascalTriangle(int n)
{
    
}

int main()
{
    int n;
    cin >> n;

    vector<vector<int>>ans;
    ans = pascalTriangle(n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}