class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap; // number -> index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i]; // what we need
            if (hashmap.find(complement) != hashmap.end()) {
                return {hashmap[complement], i}; // found the pair
            }
            hashmap[nums[i]] = i; // store current number with its index
        }
        return {}; // problem guarantees one solution exists
    }
};
