#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ret = 0;
        uint32_t power = 31;
        while (n != 0) {
            ret += (n & 1) << power;
            n = n >> 1;
            power -= 1;
        }
        return ret;
    }
};

int main()
{
    Solution s;
    auto a = 000000011111111111111111101;
    auto output = s.reverseBits(a);
    cout << "output : " << output << "\n";
    return 0;
}