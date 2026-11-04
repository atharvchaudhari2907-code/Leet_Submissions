#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;

        int minR=n,maxR=0;
        int minC=m,maxC=0;

        for(int i=0;i<n;i++){
            string s;
            cin>>s;

            for(int j=0;j<m;j++){
                if(s[j]=='1'){

                    if(i<minR)
                        minR=i;

                    if(i>maxR)
                        maxR=i;

                    if(j<minC)
                        minC=j;

                    if(j>maxC)
                        maxC=j;
                }
            }
        }

        int height=maxR-minR+ 1;
        int width=maxC-minC+ 1;

        cout<<height*width<<endl;
    }

    return 0;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna