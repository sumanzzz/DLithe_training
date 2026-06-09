#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1 ,1, 0, 1,1, 0,0, 1, 0,0,1};
    int n = nums.size();
    int i = 0 ;
    int count = 0;
    while(i < n - 2){
        if(nums[i+3] != 1 && nums[i+2] != 1 && nums[i+1] != 1) return -1;
        else {
            if(nums[i+3] == 1){
                i += 3;
                count++;
            }
            else if(nums[i+2] == 1){
                i+=2;
                count++;
            }
            else {
                i ++;
                count++;
            }
        }
    }
    cout<<count<<endl;
    return count;

}
/*
    1   1   0   1   0   1   1


    minlen = INT_MAX

*/