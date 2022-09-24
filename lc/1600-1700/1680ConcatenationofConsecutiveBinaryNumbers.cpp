class Solution {
public:
    int concatenatedBinary(int n) {
        for(int i=1; i<=n; i++){
            dectobinary(i);
        }
    }
    void dectobinary(int n){
        int binarydec[32];
        int i=0;
        while(n>0) {
            binarydec[i] = n%2;
            n=n/2;
            i++;
        }
        for(int j=i-1; j>=0; j++){
            cout<<binarydec[j];
        }
    }
};