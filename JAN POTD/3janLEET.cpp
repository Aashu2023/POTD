// 169. Majority Element
//The majority element is the element that appears more than ⌊n / 2⌋ times. 
//You may assume that the majority element always exists in the array.

// Example 1:

// Input: nums = [3,2,3]
// Output: 3
// Example 2:

// Input: nums = [2,2,1,1,1,2,2]
// Output: 2
 

// Constraints:

// n == nums.length
// 1 <= n <= 5 * 104
// -109 <= nums[i] <= 109

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n=nums.size(),maxi=INT_MIN;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        n=n/2;
        int ans;
        for(auto pr:m){
           if(pr.second>n) ans=pr.first;
        }
        return ans;
    }
};