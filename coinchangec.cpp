#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> coin={1,2,3};
    int sum=5;
    vector<vector<int>> a(coin.size()+1,vector<int> (sum+1,0));
    for(int i=0; i<a.size(); i++)
    {
        a[i][0]=1;
    }
    for(int i=1; i<a.size(); i++)
    {
        for(int j=1; j<a[i].size(); j++)
        {
            if(coin[i-1]<=j)
            {
                a[i][j]=a[i][j-coin[i-1]]+a[i-1][j];
            }
            else 
            a[i][j]=a[i-1][j];
        }
    }
    cout<<a[coin.size()][sum]<<" ";
}