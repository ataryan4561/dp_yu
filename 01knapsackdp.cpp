#include<bits/stdc++.h>
using namespace std;
int main()
{
//     A : [ 359, 963, 465, 706, 146, 282, 828, 962, 492 ]
// B : [ 96, 43, 28, 37, 92, 5, 3, 54, 93 ]
// C : 383
     vector<int> arr={359, 963, 465, 706, 146, 282, 828, 962, 492};//weight
   vector<int> arr2={96, 43, 28, 37, 92, 5, 3, 54, 93};//val
   int wt=383; //wt
   vector<vector<int>> ans(arr.size()+1,vector<int> (wt+1,0));
    for(int i=1; i<arr.size()+1; i++)
    {
        for(int j=1; j<wt+1; j++)
        {
            if(arr[i-1]<=j)
            {
                ans[i][j]=max(arr2[i-1]+ans[i-1][j-arr[i-1]],ans[i-1][j]);
            }
            else 
                ans[i][j]=ans[i-1][j];
        }
    }
    cout<<ans[arr.size()][wt]<<" ";
}