class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        int count = words.size();

        bool all_letters[26] = {};

        for (char c : allowed)
            all_letters[c - 'a'] = true;

        for (string word : words)
        {
            for (char c : word)
            {
                if (!all_letters[c - 'a'])
                {
                    count--;
                    break;
                }
            }
        }
        return count;
    }
};