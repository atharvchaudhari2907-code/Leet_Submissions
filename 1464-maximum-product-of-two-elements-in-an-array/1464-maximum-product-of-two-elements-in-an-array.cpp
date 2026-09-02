class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=0;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int prod =(nums[i]-1)*(nums[j]-1);
                if (prod>ans){
                    ans=prod;
                }
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna