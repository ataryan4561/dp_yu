#include<bits/stdc++.h>
using namespace std;
int  main()
{
    string s1="bebdeeedaddecebbbbbabebedc";
    vector<vector<int>> s(s1.size()+1, vector<int> (s1.size()+1,0));
    for(int i=1; i<s.size(); i++)
    {
        for(int j=1; j<s[i].size(); j++)
        {
            if(s1[i-1]==s1[j-1] && i!=j)
            {
                s[i][j]=s[i-1][j-1]+1;
            }
            else 
                s[i][j]=max(s[i-1][j],s[i][j-1]);
        }
    }
    // for(int i=0; i<s.size(); i++)
    // {
    //     for(int j=0; j<s[i].size(); j++)
    //     {
    //         cout<<s[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<s[s1.size()][s1.size()];
}