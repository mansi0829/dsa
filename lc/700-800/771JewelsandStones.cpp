class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int stonesize = stones.size();
        int jewelsize = jewels.size();
        int count = 0;
        for(int i=0; i<stonesize; i++){
            for(int j=0; j<jewelsize; j++){
                if(jewels[j]==stones[i]) {
                    count++;
                }
            }
        }
        return count;
    }
};