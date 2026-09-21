class Solution {
public:
    string largestOddNumber(string num) {
        int M = -1;
        string ans = "";
        int i = 0;
        while (num[i] != '\0') {
            if ((num[i] - '0') % 2 != 0) {
                M = i;
            }
            i++;
        }
        ans=num.substr(0,M+1);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna