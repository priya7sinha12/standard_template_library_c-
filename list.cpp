#include <iostream>
#include <list>
using namespace std;

void print(list <int> l1)
{
    list<int>::iterator it=l1.begin();
    cout<<"elements of list are :\n";
    if(l1.empty())
    {
        cout<<"sorry.. no elements\n";
    }
    while(it!=l1.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

}

int main(){
    list<int> l;
    l.push_back(7);
    l.push_back(71);
    l.push_back(13);
    l.push_back(56);
    l.push_back(9);
    print(l);
    l.pop_back();
    print(l);
    cout<<"front element of list: "<<l.front()<<endl;
    cout<<"back element of list: "<<l.back()<<endl;
    l.erase(l.begin());
    print(l);
    l.push_back(17);
    l.push_back(18);
    l.push_back(55);
    l.push_back(8);
    l.push_back(100);
    print(l);
    list<int>::iterator itr1=l.begin();
    list<int>::iterator itr2=l.begin();
    // advance(itr1, 1);
     // Incrementing itr2 by 3 positions
    advance(itr2, 3);
    // deleting range of elements from index [0, 3)
    l.erase(itr1,itr2);
    print(l);
    l.erase(itr2);
    print(l);
}