#include<bits/stdc++.h>
using namespace std;
int fac(int i)
{
    if(i<=1)
        return 1;
    return i*fac(i-1);
}
int main()
{
    vector<int> arr(6,0);
    arr[0]=arr[1]=1;
    for(int i=1; i<6; i++)
    {
        arr[i]=i*arr[i-1];
    }
    cout<<arr[5]<<endl;
    // cout<<fac(5)<<endl;
}