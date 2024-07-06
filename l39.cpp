#include <iostream>
#include <algorithm>

// Function to generate all permutations of a string
void generatePermutations(std::string str, int left, int right) {
    // Base case: If we have processed all characters in the string
    if (left == right) {
        std::cout << str << std::endl;
        return;
    }

    // Recursively generate permutations by swapping each character with every other character
    for (int i = left; i <= right; ++i) {
        std::swap(str[left], str[i]);
        generatePermutations(str, left + 1, right);
        std::swap(str[left], str[i]); // Backtrack
    }
}

int main() {
    std::string str = "abc";

    std::cout << "All permutations of 'abc' are:\n";
    generatePermutations(str, 0, str.length() - 1);

    return 0;
}
