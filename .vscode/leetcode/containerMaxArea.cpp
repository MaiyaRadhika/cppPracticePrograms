#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int area = INT_MIN;
        auto rightSlider = height.size()-1; //for index
        auto leftSlider = 0;
        while(leftSlider < rightSlider)
        {
            //l*b -> currentarea
            int currentArea = std::min(height[leftSlider],height[rightSlider]) * (rightSlider-leftSlider);
            area = std::max(currentArea,area);
            if(height[leftSlider] < height[rightSlider])
            {
                leftSlider++;
            }
            else
            {
                rightSlider--;
            }
            
        }
        return area;
    }
};

// int main()
// {
//     Solution s;
//     //vector<int> input {7,1,5,3,6,4};
//     vector<int> input {4,3,2,1,4};
//     int output = s.maxArea(input);
//     cout << "Output : " << output << "\n";
//     return 0;
// }