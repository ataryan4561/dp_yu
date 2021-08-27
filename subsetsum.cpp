#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr1={1,2,3,4,5};
    int sum=8;
    vector<vector<bool>> arr(arr1.size()+1,vector<bool> (sum+1,false));
    for(int i=0; i<arr1.size()+1; i++)
    {
        arr[i][0]=true;
    }
    for(int i=1; i<arr.size(); i++)
    {
        for(int j=1; j<arr[i].size(); j++)
        {
            if(arr1[i-1]<=j)
            {
                arr[i][j]=arr[i-1][j]||arr[i-1][j-arr1[i-1]];
            }
            else
                arr[i][j]=arr[i-1][j];
        }
    }
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<arr[arr1.size()][sum]<<" ";
}