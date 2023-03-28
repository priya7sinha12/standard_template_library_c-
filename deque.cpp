#include <iostream>
#include <deque>
using namespace std;

void print(deque<int> dq)
{
    cout<<"printing elements of deque :\n";
    deque<int>::iterator itr;
    for(itr=dq.begin();itr!=dq.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

int main()
{
    deque<int> dq;
    dq.push_back(90);
    dq.push_front(78);
    dq.push_back(34);
    dq.push_front(56);
    dq.push_front(7);
    cout<<"size of deque : "<<dq.size()<<endl;
    cout<<"maximum size of deque : "<<dq.max_size()<<endl;
    cout<<"element at index 2 of deque : "<<dq.at(2)<<endl;
    print(dq);
    cout<<"printing elements of deque in reverse order :\n";
    for(auto itr=dq.rbegin();itr!=dq.rend();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<"front element of deque : "<<dq.front()<<endl;
    cout<<"back element of deque : "<<dq.back()<<endl;
    auto req=dq.begin();
    dq.erase(req+3);
    print(dq);
    cout<<"now we will clear deque\n";
    dq.clear();
    cout<<"is deque empty now ? "<<dq.empty();
    return 0;

}