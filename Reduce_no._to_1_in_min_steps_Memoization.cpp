#include<bits/stdc++.h>
using namespace std;
int memo[10000];
const int INF=INT_MAX;
int reduceto1MEMO(int n)
{
    int q1=INF,q2=INF,q3=INF;
    if(n==1)return 0;
    if(memo[n]!=-1)
        return memo[n];
    if(n%3==0)q1=1+reduceto1MEMO(n/3);
    if(n%2==0)q2=1+reduceto1MEMO(n/2);
    q3=1+reduceto1MEMO(n-1);
    memo[n]=min(q1,min(q2,q3));
    return memo[n];
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        memo[i]=-1;
    }
    int ans=reduceto1MEMO(n);
    cout<<n<<" will reduce to 1 in "<<ans;
    return 0;
}
