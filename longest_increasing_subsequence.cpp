#include<bits/stdc++.h>
using namespace std;
int lis(int arr[100],int n)
{
    int dp[100];
    for(int i=0;i<n;++i)
    {
        dp[i]=1;
    }
    int best=-1;
    for(int i=1;i<n;++i)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]<=arr[i])
            {
                int curlen=1+dp[j];
                dp[i]=max(curlen,dp[i]);
            }
        }
        best=max(best,dp[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    return best;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int ans=lis(arr,n);
    cout<<ans;
}
