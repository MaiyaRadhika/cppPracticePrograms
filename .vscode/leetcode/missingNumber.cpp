#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // std::sort(nums.begin(),nums.end());
        // auto ret = 0;
        // for(auto num : nums)
        // {
        //     if(ret != num)
        //     {
        //         break;
        //     }
        //     ret++;
        // }
        // set<int> tempSet;
        // for(auto num : nums) 
        //     tempSet.insert(num);
        // auto ret = -1;
        // for(auto idx= 0;idx < nums.size();idx++)
        // {
        //     if(tempSet.find(idx) == tempSet.end())
        //     {
        //         ret = idx;
        //         break;
        //     }
        // }
        int actualSum = 0;
        int expectedSum = nums.size() * (nums.size()+1)/2;
        std::for_each(nums.begin(),nums.end(),[&actualSum](const int& n){actualSum += n;});
        return expectedSum - actualSum;
    }
};

int main()
{
    Solution s;
    //vector<int> input {7,1,5,3,6,4};
    vector<int> input {3,0,1};
    int output = s.missingNumber(input);
    cout << "Output : " << output << "\n";
    return 0;
}