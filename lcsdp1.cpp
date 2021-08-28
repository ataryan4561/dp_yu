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
                a[i][j]=a[i-1][j-1]+1;
            else 
                a[i][j]=0;
        }
    }
    int max_=0;
    for(auto i: a)
    {
        max_=max(*max_element(i.begin(),i.end()),max_);
    }
    cout<<max_;
}