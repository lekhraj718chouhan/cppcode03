#include <iostream>
#include <vector>

// Function to generate all subsets of a set
void generateSubsets(const std::vector<int>& nums, int index, std::vector<int>& subset) {
    // Base case: If we have processed all elements in the set
    if (index == nums.size()) {
        // Print the subset
        std::cout << "{ ";
        for (int num : subset) {
            std::cout << num << " ";
        }
        std::cout << "}" << std::endl;
        return;
    }

    // Include the current element in the subset and recurse
    subset.push_back(nums[index]);
    generateSubsets(nums, index + 1, subset);

    // Exclude the current element from the subset and recurse
    subset.pop_back();
    generateSubsets(nums, index + 1, subset);
}

int main() {
    std::vector<int> nums = {1, 2, 3};

    std::cout << "All subsets of {1, 2, 3} are:\n";
    std::vector<int> subset;
    generateSubsets(nums, 0, subset);

    return 0;
}
