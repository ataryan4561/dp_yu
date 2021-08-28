#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="aryan";
    string s2="arai";
    vector<vector<int>> a(s1.size()+1,vector<int> (s2.size()+1,0));
    for(int i=1; i<s1.size()+1; i++)
    {
        for(int j=1; j<s2.size()+1; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                a[i][j]=a[i-1][j-1]+1;
            }
            else 
            {
                a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
    }
    cout<<s1.size()+s2.size()-a[s1.size()][s2.size()];
}