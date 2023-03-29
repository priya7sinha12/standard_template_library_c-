#include<iostream>
#include<queue>
using namespace std;

void show(priority_queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

void show2(priority_queue<int,vector<int>,greater<int>>q)
{
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main()
{
    int arr[6] = { 10, 2, 4, 8, 6, 9 };
    priority_queue<int> pq;
    priority_queue<int> queue2;
    priority_queue<int,vector<int>,greater<int>> rpq(arr,arr+6);
    pq.push(7);
    pq.push(78);
    pq.push(56);
    pq.push(8);
    pq.push(99);
    pq.push(0);
    pq.push(-8);
    queue2.push(90);
    queue2.push(111);

    cout<<"priority queue pq values: "<<endl;
    show(pq);
    cout<<"priority queue rpq values: "<<endl;
    show2(rpq);

    cout<<"size of pq: "<<pq.size()<<endl;
    cout<<"size of dpq: "<<rpq.size()<<endl;

    cout<<"first element of pq: "<<pq.top()<<endl;
    cout<<"first element of pq: "<<rpq.top()<<endl;

    cout<<"now we will swap pq and queue2 :"<<endl;
    pq.swap(queue2);

    cout<<"priority queue pq values: "<<endl;
    show(pq);
    cout<<"priority queue queue2 values: "<<endl;
    show(queue2);
}