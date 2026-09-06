class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        while (i<j){
            if(s[i]!=s[j]){
                if(s[i]>s[j])
                    s[i]=s[j];
                else
                    s[j]=s[i];
            }
            i++;
            j--;
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna