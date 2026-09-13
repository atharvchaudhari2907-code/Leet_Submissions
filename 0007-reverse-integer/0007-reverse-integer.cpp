class Solution {
public:
    int reverse(int x) {
        int rev=0;

        while (x!= 0){
            int digit= x%10;
            x = x / 10;

            if (rev>INT_MAX/10 || rev<INT_MIN/10)/*this is done bcz we are multiplying rev by 10 it can go outside the range */
                return 0;
            rev =rev*10+digit;
        }

        return rev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna