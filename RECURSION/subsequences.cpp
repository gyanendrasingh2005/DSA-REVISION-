// #include <bits/stdc++.h>
// using namespace std;

// // Solution class to generate all subsequences using bit manipulation
// class Solution {
// public:
//     // Function to return all subsequences of string s
//     vector<string> getSubsequences(string s) {
//         // Length of input string
//         int n = s.size();

//         // Total subsequences = 2^n
//         int total = 1 << n;

//         // Vector to store all subsequences
//         vector<string> subsequences;

//         // Iterate over all bit masks from 0 to 2^n - 1
//         for (int mask = 0; mask < total; mask++) {
//             // Temporary subsequence string
//             string subseq = "";

//             // Check each bit position in mask
//             for (int i = 0; i < n; i++) {
//                 // If i-th bit of mask is set, include s[i]
//                 if (mask & (1 << i)) {
//                     subseq += s[i];
//                 }
//             }

//             // Store the formed subsequence
//             subsequences.push_back(subseq);
//         }

//         // Return all generated subsequences
//         return subsequences;
//     }
// };

// int main() {
//     // Input string
//     string s = "abc";

//     // Create Solution object
//     Solution sol;

//     // Get all subsequences
//     vector<string> subsequences = sol.getSubsequences(s);

//     // Print all subsequences
//     for (auto &subseq : subsequences) {
//         cout << "\"" << subseq << "\"" << endl;
//     }

//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;

// // Solution class to generate all subsequences using recursion
// class Solution {
// public:
//     // Helper recursive function to generate subsequences
//     void helper(string &s, int index, string ¤t, vector<string> &result) {
//         // Base case: If index reaches string length, add current subsequence to result
//         if (index == s.size()) {
//             result.push_back(current);
//             return;
//         }

//         // Exclude current character and recurse
//         helper(s, index + 1, current, result);

//         // Include current character and recurse
//         current.push_back(s[index]);
//         helper(s, index + 1, current, result);

//         // Backtrack: remove last character before returning to previous call
//         current.pop_back();
//     }

//     // Function to return all subsequences of string s
//     vector<string> getSubsequences(string s) {
//         // Vector to store all subsequences
//         vector<string> result;  
//         // Current subsequence being built
//         string current = "";    
//         helper(s, 0, current, result);
//         return result;
//     }
// };

// int main() {
//     // Input string
//     string s = "abc";

//     // Create Solution object
//     Solution sol;

//     // Get all subsequences
//     vector<string> subsequences = sol.getSubsequences(s);

//     // Print all subsequences
//     for (auto &subseq : subsequences) {
//         cout << "\"" << subseq << "\"" << endl;
//     }

//     return 0;
// }











// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// private:
//     // Helper function to count subsequences
//     // with the target sum
//     int func(int ind, int sum, vector<int> &nums) {
//         // Base case: if sum is 0, one valid
//         // subsequence is found
//         if (sum == 0) return 1;
//         // Base case: if sum is negative or 
//         // index exceeds array size
//         if (sum < 0 || ind == nums.size()) return 0;
//         // Recurse by including current number
//         // or excluding it from the sum
//         return func(ind + 1, sum - nums[ind], nums) + func(ind + 1, sum, nums);
//     }

// public:
//     // Function to start counting subsequences
//     int countSubsequenceWithTargetSum(vector<int>& nums, int target) {
//         return func(0, target, nums);
//     }
// };

// // Main function to test the solution
// int main() {
//     Solution sol;
//     vector<int> nums = {1, 2, 3, 4, 5};
//     int target = 5;
//     cout << "Number of subsequences with target sum " << target << ": "
//          << sol.countSubsequenceWithTargetSum(nums, target) << endl;
//     return 0;
// }























// #include <bits/stdc++.h>
// using namespace std;

// bool solve(int index, int n, vector<int>& arr, int sum,
//            vector<int>& temp) {
//     if (sum == 0) {
//         for (int x : temp) cout << x << " ";
//         cout << "\n";
//         return true;   // stop after printing one
//     }

//     if (index == n || sum < 0)
//         return false;

//     // take
//     temp.push_back(arr[index]);
//     if (solve(index + 1, n, arr, sum - arr[index], temp))
//         return true;
//     temp.pop_back();  // backtrack

//     // not take
//     if (solve(index + 1, n, arr, sum, temp))
//         return true;

//     return false;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4};
//     int k = 5;
//     int n = arr.size();

//     vector<int> temp;
//     solve(0, n, arr, k, temp);
// }












































// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// private:
//     // This method recursively checks for the subsequence with the given sum
//     bool func(int ind, int sum, std::vector<int> &nums) {
//         // Base case: if all elements are processed, check if sum is 0
//         if (ind == nums.size()) {
//             return sum == 0;
//         }
//         // Recursive call: include the current element in the subsequence
//         // or exclude the current element from the subsequence
//         return func(ind + 1, sum - nums[ind], nums) | func(ind + 1, sum, nums);
//     }

// public:
//     // This method initiates the recursive process
//     bool checkSubsequenceSum(std::vector<int>& nums, int target) {
//         return func(0, target, nums); // Start the recursive process
//     }
// };

// // Main function to test the solution
// int main() {
//     Solution sol;
//     std::vector<int> nums = {1, 2, 3, 4};
//     int target = 5;

//     cout << sol.checkSubsequenceSum(nums, target); // Expected output: true
//     return 0;
// }