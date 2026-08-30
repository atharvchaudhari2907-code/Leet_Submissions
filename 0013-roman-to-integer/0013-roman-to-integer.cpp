class Solution {
public:
    int romanToInt(string s) {
int ans = 0;
for (int i=0;i<=s.length()-1;i++) {
        if (s[i]=='I'){  
    if (s[i+1] == 'V' || s[i+1] == 'X'|| s[i+1] == 'L'|| s[i+1] == 'C'|| s[i+1] == 'D'|| s[i+1] == 'M'){
        ans = ans - 1;
    }
    else
            ans+=1;
        }
        if (s[i]=='V'){
        if(s[i+1] =='X'|| s[i+1] == 'L'|| s[i+1] == 'C'|| s[i+1] == 'D'|| s[i+1] == 'M'){
        ans = ans-5;
    }
    else
            ans+=5;}

        if (s[i]=='X'){
        if(s[i+1] == 'L'|| s[i+1] == 'C'|| s[i+1] == 'D'|| s[i+1] == 'M'){
        ans = ans-10;
    }
    else
            ans+=10;
        }


        if (s[i]=='L'){
        if(s[i+1] == 'C'|| s[i+1] == 'D'|| s[i+1] == 'M'){
        ans = ans-50;
    }
    else    
            ans+=50;
        }
        if (s[i]=='C'){
        if(s[i+1] == 'D'|| s[i+1] == 'M'){
        ans = ans-100;
    }
    else    
            ans+=100;
        }
        if (s[i]=='D'){
        if(s[i+1] == 'M'){
        ans = ans-500;
    }
    else
            ans+=500;
        }
        if (s[i]=='M'){
            ans+=1000;
        } 
}
   return ans;
   }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna