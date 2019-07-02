#include<bits/stdc++.h>
using namespace std;
int INF=INT_MAX;
int reduceto1MEMO(int n)
{
    int dp[10000];
    dp[0]=0,dp[1]=0;
    dp[2]=1,dp[3]=1;
    for(int i=4;i<=n;i++)
    {
        int q1=INF;
        int q2=INF;
        int q3=INF;
        if(i%3==0)
            q1=1+dp[i/3];
        if(i%2==0)
            q2=1+dp[i/2];
        q3=1+dp[i-1];
        dp[i]=min(q1,min(q2,q3));
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    int ans=reduceto1MEMO(n);
    cout<<n<<" will reduce to 1 in "<<ans;
    return 0;
}
