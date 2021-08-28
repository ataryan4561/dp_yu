#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="aryan";
    string s2="aari";
    vector<vector<int>> a(s1.size()+1,vector<int> (s2.size()+1,0));
    for(int i=1; i<a.size(); i++)
    {
        for(int j=1; j<a[i].size(); i++)
        {
            if(s1[i-1]==s2[j-1])
            {
                a[i][j]=a[i-1][j-1]+1;
            }
            else 
                a[i][j]=max(a[i-1][j],a[i][j-1]);
        }
    }
    int lcs=a[s1.size()][s2.size()];
    cout<<a.size()-lcs<<" "<<b.size()-lcs;
}