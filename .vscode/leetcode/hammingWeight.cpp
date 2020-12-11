#include <iostream>

using namespace std;


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0 ;
        while( n != 0)
        {
            cout << "1 : " << n << "\n";
            n = n & (n-1);
            cout << "2 : " << n << "\n";
            count++;
            
        }
        return count;
    }
};

int main()
{
    Solution s;
    uint32_t a = 00000000000000000000000000001011;
    int output = s.hammingWeight(a);
    cout << "Output : " << output << "\n";
    return 0;
}