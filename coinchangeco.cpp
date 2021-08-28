#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> coins={1,2,3};
    int sum=5;
    vector<vector<int>> a(coins.size()+1,vector<int> (sum+1,0));
    for(int i=0; i<a[i].size(); i++)
    {
        a[0][i]=INT_MAX-1;
    }
    for(int i=1; i<sum+1; i++)
    {
        if(i%coins[0]==0)
            a[1][i]=i/coins[0];
        else 
            a[1][i]=INT_MAX-1;
    }
    for(int i=2; i<a.size(); i++)
    {
        for(int j=1; j<a[i].size(); j++)
        {
            if(coins[i-1]<=j)
                a[i][j]=min(1+a[i][j-coins[i-1]],a[i-1][j]);
            else 
                a[i][j]=a[i-1][j];
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
    cout<<a[coins.size()][sum]<<" ";
}