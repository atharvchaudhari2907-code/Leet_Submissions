class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int limit =n/3;
        unordered_map<int,int>count;
        vector<int> ans;
    for(int x:nums){
            count[x]++;
        }
    for(auto x:count){
            if(x.second>limit){
                ans.push_back(x.first);
            }
        }
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna