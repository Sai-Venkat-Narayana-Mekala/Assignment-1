#include <iostream>  // Include the iostream library for standard input and output
#include <vector>    // Include the vector library to utilize the vector container

using namespace std; // Utilize the standard namespace

// Function to find the indices of two numbers in the vector that sum up to the target value
vector<int> twoSum(const vector<int>& nums, int target) {
    // Iterate over each element in the vector
    for (int i = 0; i < nums.size(); ++i) {
        // Iterate over elements following the current element
        for (int j = i + 1; j < nums.size(); ++j) {
            // Check if the sum of the current pair of elements matches the target value
            if (nums[i] + nums[j] == target) {
                // Return the indices of the two elements
                return {i, j};
            }
        }
    }
    // Return an empty vector if no valid pair is found
    return {};
}

int main() {
    // First example
    vector<int> nums1 = {2, 7, 11, 15};  // Initialize the vector with numbers
    int target1 = 9;                     // Set the target sum
    vector<int> result1 = twoSum(nums1, target1);  // Execute the twoSum function
    // Display the result
    cout << "Output: [" << result1[0] << ", " << result1[1] << "]" << endl;

    // Second example
    vector<int> nums2 = {3, 2, 4};       // Initialize the vector with numbers
    int target2 = 6;                     // Set the target sum
    vector<int> result2 = twoSum(nums2, target2);  // Execute the twoSum function
    // Display the result
    cout << "Output: [" << result2[0] << ", " << result2[1] << "]" << endl;

    // Third example
    vector<int> nums3 = {3, 3};          // Initialize the vector with numbers
    int target3 = 6;                     // Set the target sum
    vector<int> result3 = twoSum(nums3, target3);  // Execute the twoSum function
    // Display the result
    cout << "Output: [" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;  // Return 0 to indicate successful program termination
}
