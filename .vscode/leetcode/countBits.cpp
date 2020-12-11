#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> ans(num + 1);
        ans[0] = 0;
        for(auto i=1; i <= num;i++)
        {
            auto count = 0;
            if(i%2 == 0)
            {
                count = ans[(i >> 1)];
            }
            else
            {
                count = ans[(i >> 1)]+1;
            }
            ans[i] = count;
            //cout << "ans[" << i << "] : " << ans[i] <<"\n";
        }
        return ans;
    }
};

int main()
{
    Solution s;
    auto output = s.countBits(5);
    for_each(output.begin(),output.end(),[](int& n){ cout << n << "  ";});
    return 0;
}