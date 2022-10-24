class Solution
{
    public:
        bool isValid(string s)
        {
            int n = s.size();
            stack<char> ans;
            if (n % 2 != 0) return false;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                {
                    ans.push(s[i]);
                }
                else if (s[i] == ')' || s[i] == '}' || s[i] == ']')
                {
                    if (ans.empty()) return false;
                    else if (s[i] == ')' && !ans.empty() && ans.top() == '(')
                    {
                        ans.pop();
                    }
                    else if (s[i] == '}' && !ans.empty() && ans.top() == '{')
                    {
                        ans.pop();
                    }
                    else if (s[i] == ']' && !ans.empty() && ans.top() == '[')
                    {
                        ans.pop();
                    }
                    else if (s[i] == ')' && !ans.empty() && ans.top() != '(')
                    {
                        return false;
                    }
                    else if (s[i] == '}' && !ans.empty() && ans.top() != '{')
                    {
                        return false;
                    }
                    else if (s[i] == ']' && !ans.empty() && ans.top() != '[')
                    {
                        return false;
                    }
                }
            }

            return ans.empty();
        }
};