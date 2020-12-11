#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int getSum(int a, int b) {
        while(b)
        {
            auto carry = (unsigned) (a&b) << 1;
            a = a^b;
            b = carry;
        }
        return a;
    }
};

// int main()
// {
//     Solution s;
//     int a = 2;
//     int b = 5;
//     int output = s.getSum(a,b);
//     cout << "Output : " << output << "\n";
//     return 0;
// }