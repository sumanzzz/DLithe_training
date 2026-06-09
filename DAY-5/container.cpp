#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0 , r = n - 1;
        int maxwater = 0 ; 
        while(l  < r){
            int breadth = r - l;
            int minheight = min(height[l] , height[r]);
            maxwater = max(maxwater , breadth * minheight);
            (height[l] < height[r]) ? l++ : r--;
        }
        return maxwater;
    }
};