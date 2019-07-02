#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int memo[1000][1000];
int maxprofit(int arr[],int st,int en,int year)
{
    cnt++;
    if(st>en)
    {
        return 0;
    }
    if(memo[st][en]!=-1)
    {
        return memo[st][en];
    }
    int q1=arr[st]*year+maxprofit(arr,st+1,en,year+1);
    int q2=arr[en]*year+maxprofit(arr,st,en-1,year+1);
    int ans=max(q1,q2);
    memo[st][en]=ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            memo[i][j]=-1;
        }
    }
    int st=0;
    int en=n-1;
    int ans=maxprofit(arr,0,n-1,1);
    cout<<ans<<endl<<cnt;//here count reduced

}
