class Solution {
public:
    int climbStairs(int n) {
        if (n==1)
         return 1;
        if (n==2)
         return 2;

        int a=1;  
        int b=2;  

        for (int i=3;i<=n; i++){
            int c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
};
/* WHAT I GOT IS:
IF N=1 OUTPUT IS 1
IF N=2 OUTPUT IS 2
IF N=3 OUTPUT IS 3 .... IT'S BASICALLY ADDITION OF PREVIOUS 2 TERMSAS WE DO IN FIBONACCI SERIES
IF N=4 OUTPUT IS 5 .... IT'S BASICALLY ADDITION OF PREVIOUS 2 TERMSAS WE DO IN FIBONACCI SERIES
IF N=5 OUTPUT IS 8 .... IT'S BASICALLY ADDITION OF PREVIOUS 2 TERMSAS WE DO IN FIBONACCI SERIES
SO ON....*/

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna