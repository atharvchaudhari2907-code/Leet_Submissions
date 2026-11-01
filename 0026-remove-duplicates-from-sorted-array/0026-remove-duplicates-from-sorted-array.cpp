class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
         for (int i=0;i<nums.size();i++){
            if (ans.empty()||ans.back()!=nums[i]){
                ans.push_back(nums[i]);
            }
        }

        for (int i=0;i<ans.size();i++){
            nums[i]=ans[i];
        }
        return ans.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna