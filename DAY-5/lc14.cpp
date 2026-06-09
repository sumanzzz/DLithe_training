#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin() , strs.end());
        string first = strs[0];
        string last = strs[n - 1];
        string mini = min(first , last);
        int i = 0;
        string res;
        while(i < mini.size()){
            if(first[i] == last[i] ){
                 res.push_back(first[i]);
                 i++;
            }
            else break;
            
        }
        return res;

    }
};