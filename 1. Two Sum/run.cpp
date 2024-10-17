#include <iostream>
#include "Solution.h"

int main() {

    // TODO: Case 1
    std::vector<int> nums{2,7,11,15};
    int target = 9;

    // TODO: Case 2
    // std::vector<int> nums{3,2,4};
    // int target = 6;

    // TODO: Case 3
    // std::vector<int> nums(3,3);
    // int target = 6;

    // TODO: Run
    Solution solution;
    auto answer = solution.twoSum(nums, target);

    std::cout << "[";
    for(int i=0; i<answer.size(); i++) {
        if (i > 0) std::cout << ", ";
        std::cout << answer[i];
    }
    std::cout << "]" << std::endl;

    return 0;
}