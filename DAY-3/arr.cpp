/*given an integer array of size n and variable k , k <= n 
 find the maximum sum of any k length subarray with O(n) time complexity
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {2,7,11,15,6,3} ;
    int k = 3;
    int n = nums.size();
    int maxSum = 0;
    int sum = 0 ; 
    for(int  i = 0 ; i < k ; i++){
        sum += nums[i];
    }
    maxSum = max(sum , maxSum);
    for(int i =k  ;i < n ;i++){
        sum = sum - nums[i - k] + nums[i];
        maxSum = max(sum , maxSum);
    }
    cout<<maxSum<<endl;
}