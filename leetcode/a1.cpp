class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue; 
            int firstPointer = i + 1, secondPointer = n - 1;
            while (firstPointer < secondPointer) {
                int targetSum =
                    nums[i] + nums[firstPointer] + nums[secondPointer];
                if (targetSum < 0)
                    firstPointer++;
                else if (targetSum > 0)
                    secondPointer--;
                else {
                    ans.push_back(
                        {nums[i], nums[firstPointer], nums[secondPointer]});
                    firstPointer++;
                    secondPointer--;
                    while (firstPointer < secondPointer &&
                           nums[firstPointer] == nums[firstPointer - 1])
                        firstPointer++;
                }
            }
        }
        return ans;
    }
};
