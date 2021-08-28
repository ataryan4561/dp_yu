#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> len={1,2,3,4,5,6};
    vector<int> val={1,2,4,7,3,4};
    int length=6;
    vector<vector<int>> a(length+1,vector<int> (length+1,0));
    for(int i=1; i<a.size(); i++)
    {
        for(int j=1; j<a[i].size(); j++)
        {
            if(len[i-1]<=j)
            {
                a[i][j]=max(val[i-1]+a[i][j-len[i-1]],a[i-1][j]);
            }
            else 
            a[i][j]=a[i-1][j];
        }
    }
    cout<<a[length][length]<<" ";
}