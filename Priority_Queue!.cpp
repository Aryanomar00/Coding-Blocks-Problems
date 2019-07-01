#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int> >pq;//greater is an inbuilt comparator and forms min heap
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
