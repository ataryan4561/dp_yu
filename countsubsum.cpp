#include<bits/stdc++.h>
using namespace std;
int msum(vector<int> arr,int sum,int i)
{
    if(i==arr.size() && sum>0)
        return 0;
    else if(sum==0)
        return 1;
    else if(arr[i]<=sum)
    {
        int c=0;
        c=msum(arr,sum-arr[i],i+1)+msum(arr,sum,i+1);  
        return c;   
    }
    else    
        return msum(arr,sum,i+1);
}  
int main()
{
    vector<int> arr={2,3,5,6,8,10};
    int sum=10;
    cout<<msum(arr,10,0);
}