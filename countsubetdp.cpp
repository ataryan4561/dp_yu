#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={2,3,5,6,8,10};
    int sum=10;
    vector<vector<int>> ans(arr.size()+1,vector<int> (sum+1,0));
    ans[0][0]=1;
    for(int i=0; i<ans.size(); i++)
    {
        ans[i][0]=1;
    }
    for(int i=1; i<ans.size(); i++)
    {
        for(int j=1; j<ans[i].size(); j++)
        {
            if(arr[i-1]<=j)
            {
                ans[i][j]=ans[i-1][j]+ans[i-1][j-arr[i-1]];
            }
            else 
                ans[i][j]=ans[i-1][j];
        }
    }
    cout<<ans[arr.size()][sum]<<" ";
}
