#include<bits/stdc++.h>
using namespace std;
int calls=0;
vector<vector<int>> a(1000,vector<int> (1000,-1));
int lcs(string s1,string s2,int s1s,int s2s)
{
    if(s1s==0 || s2s==0)
        return 0;
    else if(a[s1s][s2s]!=-1)
    {
        return a[s1s][s2s];
    }
    else if(s1[s1s-1]==s2[s2s-1])
    {
        calls++;
        return a[s1s][s2s]=lcs(s1,s2,s1s-1,s2s-1)+1;
    }
    else 
        calls++;
        return a[s1s][s2s]=max(lcs(s1,s2,s1s,s2s-1),lcs(s1,s2,s1s-1,s2s));
}
int main()
{
    string s1="aryan";
    string s2="aari";
    cout<<lcs(s1,s2,s1.size(),s2.size())<<" ";
    cout<<calls<<endl;
}
