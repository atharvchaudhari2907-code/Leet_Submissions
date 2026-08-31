class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i < nums.size(); i++) {
            int required =target-nums[i];
            for(int j =i+1;j<nums.size();j++){
                if(nums[j]==required){
                  return {i, j};
              }
          }
        }
       return{};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna