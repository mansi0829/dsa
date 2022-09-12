class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        // faceup = tokens - power ;
        // facedown = tokens + power ;
        sort(tokens.begin(), tokens.end());
        int score = 0, maxScore = 0;
        int l=0, r = tokens.size()-1;
        while(l<=r) {
            if(power>=tokens[l]){
                power-=tokens[l++];
                score++;
                maxScore = max(maxScore, score);
            }
            else if(score>0){
                power+=tokens[r--];
                score--;
            }
            else {
                break;
            }
        }
        return maxScore;
    }
};