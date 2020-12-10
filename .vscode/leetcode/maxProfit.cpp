#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
    public:
    int maxProfit(vector<int>& prices)
    {
        int minPrice = INT_MAX;
        int maxprofitValue = 0;
        for(auto price : prices)
        {
            minPrice = min(minPrice,price);
            maxprofitValue = max(maxprofitValue, price-minPrice);
        }
        return maxprofitValue;
    }
};

// int main()
// {
//     Solution s;
//     //vector<int> input {7,1,5,3,6,4};
//     vector<int> input {7,6,4,3,1};
//     int output = s.maxProfit(input);
//     cout << "Output : " << output << "\n";
//     return 0;
// }