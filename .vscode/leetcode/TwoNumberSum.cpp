#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:

vector<int> twoNumberSum(vector<int> array, int targetSum) {
    vector<int> ret;
    unordered_map<int,int> tmp;
    for( auto i : array)
    {
        if(tmp.find(i) != tmp.end())
        {
            ret.push_back(i);
            ret.push_back(tmp[i]);
        }
        else
        {
            tmp[targetSum-i] = i;
        }
        
    }
  return ret;
}
};

// int main()
// {
//     Solution s;
//     vector<int> input{3,5,-4,8,11,1,-1,6};
//     auto sum = 10;
//     vector<int> output = s.twoNumberSum(input,sum);
//     cout << "[ ";
//     for_each(output.begin(),output.end(),[](int& elem){cout << elem << "  ";});
//     cout << "] \n";
//     return 0;
// }

 