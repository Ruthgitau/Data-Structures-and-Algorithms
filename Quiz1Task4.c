#include <vector>
#include <iostream>

int singleNumber(std::vector<int>& nums) {
    int result = 0;
    for (int i = 0; i < nums.size(); i++) {
        result ^= nums[i];
    }
    return result;
}

int main() {
    std::vector<int> nums = {4, 1, 4, 1, 2}; 
    std::cout << "The single number is " << singleNumber(nums) << std::endl;
    return 0;
}