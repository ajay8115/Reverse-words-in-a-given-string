// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;
        for (int i = 0; i < s.size(); i++)
        {
            string t = "";
            while (s[i] != '.' and i < s.size())
            {
                t += s[i];
                i++;
            }
            st.push(t);
        }

        string ans = "";
        ans += st.top();
        ans += '.';
        st.pop();
        while (!st.empty())
        {
            ans += '.';
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};