#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="aryan";
    string s2="arai";
    vector<vector<int>> a(s1.size()+1,vector<int> (s2.size()+1,0));
    for(int i=1; i<a.size(); i++)
    {
        for(int j=1; j<a[i].size(); j++)
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
    // for(int i=0; i<a.size(); i++)
    // {
    //     for(int j=0; j<a[i].size(); j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    string ans;
    int m=s1.size(); 
    int n=s2.size(); 
    while(m!=0 || n!=0)
    {
        if(s1[m-1]==s2[n-1])
        {
            ans=ans+s1[m-1];
            m--;
            n--;
        }
        else 
            if(a[m-1][n]>a[m][n-1])
            {
                ans=ans+s1[m-1];
                m--;
            }
            else 
            {
                ans=ans+s2[n-1];
                n--;
            }
    }
    for(int i=ans.size()-1; i>=0; i--)
    {
        cout<<ans[i];
    }
    cout<<endl;
}