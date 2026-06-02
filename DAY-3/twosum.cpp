#include <iostream>
#include <vector>
using namespace std;
bool twoSum(vector<int> nums , int target){
    int n = nums.size();
    int i = 0 , j = n - 1;
    while(i < j){
        if(nums[i] + nums[j] > target) j--;
        else if(nums[i] + nums[j] < target) i++;
        else return true;
    }
    return false;
}
int main(){
    vector<int> nums = {2,7,11,15};
    int target =100;
    twoSum(nums , target) ? cout<<"found"<<endl : cout<<"not found"<<endl;
}