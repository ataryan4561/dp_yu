#include<bits/stdc++.h>
using namespace std;
int calls=0;
int knapsack(vector<int> wt, vector<int> val,int size, int wet)
{
    if(size==0 || wet==0)
    {
        return 0;
    }
    if(wt[size-1]<=wet)
    {
        calls++;
        return max(val[size-1]+knapsack(wt,val,size-1,wet-wt[size-1]),knapsack(wt,val,size-1,wet));
    }
    else 
    {
        calls++;
        return knapsack(wt,val,size-1,wet);
    }
}
int main()
{   
    vector<int> arr={1,3,4,5,1,2,4,6,4,3,6,3,3,5,3,4,5,2,3,1};
   vector<int> arr2={1,4,5,7,4,2,3,3,2,3,4,4,3,3,9,3,4,1,6,9};
    cout<<knapsack(arr,arr2,arr.size(),50)<<" ";
    cout<<calls;
}