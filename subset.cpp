#include<bits/stdc++.h>
using namespace std;
bool subset_sum(vector<int> arr,int sum,int i)
{
    if(i==arr.size() || sum<0)
    {
        return false;
    }
    if(sum-arr[i]==0)
    {
        return true;
    }
    if(sum-arr[i]>0)
    {
        return subset_sum(arr,sum-arr[i],i+1) || subset_sum(arr,sum,i+1);
    }
    else
        return subset_sum(arr,sum,i+1);
}
int main()
{
    vector<int> arr={1,2,3,4,5};
    cout<<subset_sum(arr,4,0);
}