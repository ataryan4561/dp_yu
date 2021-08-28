#include<bits/stdc++.h>
using namespace std;
int  main()
{
    string s1="bebdeeedaddecebbbbbabebedc";
    string s2="abaaddaabbedeedeacbcdcaaed";
    // string s1="aryan";
    // string s2="arai";
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
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<s[i].size(); j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<s[s1.size()][s2.size()];
}