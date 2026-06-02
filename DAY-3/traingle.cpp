/*Given an integer array nums 
return the number of triplets chosen from the array
that can make triangles if we take them as side lengths of a triangle

Leetcode 611
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums = { 4 , 2, 3, 4};
    sort(nums.begin() , nums.end());
    int count = 0;
    int n = nums.size();
    for(int i = n - 1; i >= 0 ; i++){
        int l =  0 , r = i - 1;
        if(nums[l] + nums[r] > nums[i]) count += (r - l);
    }
}
/*
    [2 , 2 , 3 , 4]
     i   j       k

     count = 0;
     if(nums[i] + nums[j] >= nums[k]) count++;
*/