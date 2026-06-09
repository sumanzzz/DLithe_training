/*
             left
    1   2    3
top 4   5    6
    7   8    9 bottom
             right

{1 , 2 ,3 , 6 ,9 , 8 , 7  , 4 , 5};
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 3;
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> res;

    int left = 0, top = 0;
    int right = n - 1, bottom = n - 1;

    while (left < n)
    {
        res.push_back(matrix[top][left]);
        left++;
    }
    top++;
    if (top == bottom - 1)
        res.push_back(matrix[top][left]);
    else
    {
        while (top < bottom)
        {
            res.push_back(matrix[top][left]);
            top++;
        }
    }

    for (int num : res)
        cout << num << " ";
}