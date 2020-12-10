#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> tempSet;
        bool retVal = false;
        for(auto num :nums)
        {
            auto res = tempSet.insert(num);
            if(res.second == false)
            {
                retVal = true;
                break;
            }

        }
        return retVal;
    }
};
int main()
{
    Solution s;
    vector<int> input {7,1,5,3,6,4};
    //vector<int> input {7,6,1,3,1};
    bool output = s.containsDuplicate(input);
    cout << "Output : " << boolalpha << output << noboolalpha << "\n";
    return 0;
}