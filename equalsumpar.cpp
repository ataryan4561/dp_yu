#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={2,2,4,4};
    int s=0;
    for(int i=0; i<arr.size(); i++)
    {
        s+=arr[i];
    }
    if(s%2!=0)
    {
        cout<<0<<endl;
    }
    else 
    {
        s=s/2;
        vector<vector<bool>> ar (arr.size()+1,vector<bool> (s+1,false));
        for(int i=0; i<ar.size(); i++)
        {
            ar[i][0]=true;
        }
        for(int i=1; i<ar.size(); i++)
        {
            for(int j=1; j<ar[i].size(); j++)
            {
                if(arr[i-1]<=j)
                {
                    ar[i][j]=ar[i-1][j] || ar[i-1][j-arr[i-1]];
                }
                else 
                    ar[i][j]=ar[i-1][j];
            }
        }
        cout<<ar[arr.size()][s]<<" ";
    }
}