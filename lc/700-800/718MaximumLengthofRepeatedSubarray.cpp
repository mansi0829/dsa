class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();
        int ans=0;
        for(int i=0; i<size1; i++) {
            for(int j=0; j<size2; j++) {
                int len =0;
                while (i+len<size1 && j+len<size2 && nums1[i+len]==nums2[j+len]{
                    len++;
                }
                ans=max(ans, len);
            }
        }
        return ans;
    }
};