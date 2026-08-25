class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for (string sentence : sentences){
            int spaces = 0;

            for(char c : sentence){
                if (c==' '){
                    spaces++;
                }
            }
            int words = spaces +1;

            if (words > max){
                max = words;
            }
        }
             return max;  
    }
};