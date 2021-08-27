#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={1,3,1,3};
    int s=0;
    int diff=0;
    for(int i :arr)
    {
        s+=i;
    }
    int k=s/2;
    vector<vector<bool>> a (arr.size()+1,vector<bool> (k+1,false));
    for(int i=0; i<a.size(); i++)
    {
        a[i][0]=true;
    }
    for(int i=1; i<a.size(); i++)
    {
        for(int j=1; j<a[i].size(); j++)
        {
            if(arr[i-1]<=j)
                a[i][j]=a[i-1][j] || a[i-1][j-arr[i-1]];
            else 
                a[i][j]=a[i-1][j];
        }
    }
    //  for(int i=0; i<a.size(); i++)
    // {
    //     for(int j=0; j<a[i].size(); j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int ans=0;
    for(int i=k; i>=1; i--)
    {
        for(int j=arr.size(); j>=1; j--)
        {
            if(a[j][i]==1)
            {
                if(s-2*i==diff)
                {
                    ans++;
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}