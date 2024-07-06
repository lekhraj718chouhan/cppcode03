// class Solution{
//     public:
//     int maxSubArray(vector<int>& nums) {
//         int sum = 0;
//         int maxi = nums[0];
//         for (int i = 0; i <nums.size; i++)
//         {
//             sum = sum + nums[i];
//             maxi = max(maxi, sum);
//             if(sum<0)
//             sum = 0;
//         }
//         return maxi;
//     }
// }

#include <iostream>
#include <vector>
#include <algorithm> // for std::max

class Solution {
public:
    int maxSubArray(std::vector<int>& nums) {
        int sum = 0;
        int maxi = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxi = std::max(maxi, sum);
            if (sum < 0)
                sum = 0;
        }
        return maxi;
    }
};

int main() {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4}; // example input
    Solution solution;
    int result = solution.maxSubArray(nums);
    std::cout << "Maximum subarray sum is " << result << std::endl;
    return 0;
}
