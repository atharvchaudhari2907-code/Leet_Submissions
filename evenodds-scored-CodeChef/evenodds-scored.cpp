#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[105];
        int count=0;
        int first=-1,last=-1;

        for(int i=0;i<n;i++){
            cin>>a[i];

            if(a[i]%2!=0){
                count++;

                if(first==-1){
                    first=i;
                }

                last=i;
            }
        }

        if(count%2==0){
            cout<<n<<endl;
        }
        else {
            int left=last;
            int right=n-first-1;

            cout<<max(left,right)<<endl;
        }
    }

    return 0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna