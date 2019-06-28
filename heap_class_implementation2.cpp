#include<bits/stdc++.h>
using namespace std;
class heap
{
    vector<int>v;
    bool minheap;//decides that either heap you want is min heap or max heap
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
    void heapify(int i)//i is always 1 because heapify from the 1st index
    {
        int left=2*i;
        int right=left+1;
        int minindex=i;
        if(left<v.size() && compare(v[left],v[i]))
        {
            minindex=left;
        }
        if(right<v.size() && compare(v[right],v[minindex]))
        {
            minindex=right;
        }
        if(minindex!=i)
        {
            swap(v[i],v[minindex]);
        }
    }
    public:
     heap(bool type=true)
    {
        minheap=type;
        v.push_back(-1);
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
    void pop()
    {
        int last=v.size()-1;
        swap(v[1],v[last]);
        v.pop_back();
        heapify(1);
    }

};
int main()
{
    heap h(false);//max heap if false otherwise min heap
    h.push(5);
    h.push(15);
    h.push(2);
    h.push(20);
    h.push(3);
    while(!h.empty())
    {
        cout<<h.top()<<endl;
        h.pop();
    }
    return 0;
}
