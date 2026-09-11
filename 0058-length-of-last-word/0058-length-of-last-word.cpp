class Solution {
public:
    int lengthOfLastWord(string s) {
         int n=s.length(); 
         int i=n-1; /* for last index*/      

        while (s[i]==' '){
            i--;
        }
        int count = 0;
        while (i>=0&&s[i]!=' '){
            count++;
            i--;
        }

        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna