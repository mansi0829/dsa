class Solution
{
public:
    bool isPalindrome(int x)
    {
        //         string str = to_string(x);
        //         int n = str.size();
        //         for(int i=0; i<n/2; i++) {
        //             if(str[i]==str[n--]){
        //                 return true;
        //             }
        //             else {
        //                 return false;
        //             }

        //         }
        //         return false;
        if (x != 0 && x % 10 == 0)
        {
            return false;
        }
        int sum = 0;
        while (x > sum)
        {
            sum = x % 10 + sum * 10;
            x = x / 10;
        }
        return (x == sum / 10) || (x == sum);
    }
};