#include <iostream>
#include <unordered_set>
#include <vector>

bool has_duplicates(std::vector<int>& nums) {
    std::unordered_set<int> num_set(nums.begin(), nums.end());
    return num_set.size() != nums.size();
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    std::cout << (contains_duplicates(nums) ? "True" : "False");  // Output: True
    return 0;
}