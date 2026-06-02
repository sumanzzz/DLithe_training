#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums =  {1,2,2,3,5,5,6};
    int n = nums.size();
    int idx = 1;
    for(int i = 1 ; i < n ; i++){
        if(nums[i] != nums[i - 1]) {
            nums[idx] = nums[i];
            idx++;
        }
    }
    for(int num : nums){
        cout<<num<<" ";
    }
    cout<<endl;

}