#include<bits/stdc++.h>
using namespace std;
class heap
{
    vector<int>v;
    bool minheap;//decides that either heap you want is min heap or max heap
    public:
    heap(bool type=true)
    {
        minheap=type;
        v.push_back(-1);
    }
    bool compare(int a,int b)
    {
        if(minheap)
        {
            return a<b;
        }
        else
        {
            return a>b;
        }
    }
    void push(int data)
    {
        v.push_back(data);
        //taking element to the correct position
        int index=v.size()-1;
        int parent=index/2;
        while(index>1 && compare(v[index],v[parent]))
        {
            swap(v[index],v[parent]);
            index=parent;
            parent=parent/2;
        }
    }
    bool empty()
    {
        return v.size()==1;
    }
    int top()
    {
        return v[1];
    }

};
int main()
{
    heap h(true);//max heap if false otherwise min heap
    h.push(5);
    h.push(15);
    h.push(2);
    h.push(20);
    h.push(3);
    cout<<h.top()<<endl;

}
