#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int>pq;
    int a[10]={1,2,8,4,5,6,9,10,13};
    for(int i=0;i<9;i++)
    {
        pq.push(a[i]);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<",";//Descending Order Default
        pq.pop();
    }
    return 0;
}
