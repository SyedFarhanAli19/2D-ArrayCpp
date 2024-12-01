#include<iostream>
#include<vector>
using namespace std;
//given an integer n , return the first n rows of pascal's triangle.
int factorial(int i)
{
    int fact = 1; 

    for (int k = i; k > 1; k--)
    {
        fact = fact * k;
    }
    
    return fact;
}
vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> pascal(n);

    for (int i = 0; i < n; i++)
    {
        pascal[i].resize(i + 1);

        for (int j = 0; j < i + 1; j++)
        {
            pascal[i][j] = factorial(i)/(factorial(j)*factorial(i - j));
        }
        
    }
    return pascal;
}



int main()
{
    int n;
    cin >> n;

    vector<vector<int>>ans(n);
    ans = pascalTriangle(n);

    
        
    for (int i = 0; i < ans.size(); i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << " ";
        }
        
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}