#include<bits/stdc++.h>
using namespace std;
//Interview Problem
class car
{
public:
    int x;
    int y;
    int id;
    car(int id,int x,int y)
    {
        this->x=x;
        this->y=y;
        this->id=id;
    }
    int dis()
    {
        return x*x+y*y;
    }
    void print()
    {
        cout<<"ID:"<<id;
        cout<<"Location:"<<x<<" "<<y<<endl;
    }
};
 //functor calling
class carcompare
{
public:
    bool operator()(car a,car b)
    {
        return a.dis()<b.dis();
    }
};
int main()
{
    priority_queue<car,vector<car>,carcompare>pq;//greater is an inbuilt comparator and forms min heap
    int x[10]={5,6,17,18,9,11,0,3};
    int y[10]={1,-2,8,9,10,91,1,2};
    for(int i=0;i<8;i++)
    {
        car c(i,x[i],y[i]);
        pq.push(c);
    }
    while(!pq.empty())
    {
        car p=pq.top();
        p.print();
        pq.pop();
    }
    return 0;
}

