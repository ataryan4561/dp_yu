#include<bits/stdc++.h>
using namespace std; 
int lcs(string s1,string s2)
{
vector<vector<int>> s(s1.size()+1, vector<int> (s2.size()+1,0));
    for(int i=1; i<s.size(); i++)
    {
        for(int j=1; j<s[i].size(); j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                s[i][j]=s[i-1][j-1]+1;
            }
            else 
                s[i][j]=max(s[i-1][j],s[i][j-1]);
        }
    }
    return s[s1.size()][s2.size()];
}
int main()
{
    string s1="aryan";
    string rev = string(s1.rbegin(),s1.rend());
    cout<<lcs(s1,rev);
}   