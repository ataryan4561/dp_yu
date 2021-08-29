#include<bits/stdc++.h>
using namespace std;
int calls=0;
int mcm(vector<int> arr, int i,int j)
{
    if(i>=j)
        return 0;
    int ans=INT_MAX;
    for(int k=i; k<=j-1; k++)
    {
        calls++;
        int temp=mcm(arr,i,k)+mcm(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        ans=min(ans,temp);
    }
    return ans;
}
int main()
{
    vector<int> arr ={40,20,30,10,30};
    cout<<mcm(arr,1,arr.size()-1);
    cout<<" "<<calls;
}