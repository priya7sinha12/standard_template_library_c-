#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int,char> student;
    student.insert(pair<int,char>(101,'f'));
    student.insert({102,'j'});
    student.insert({103,'m'});
    student.insert({104,'t'});
    student.insert({105,'e'});
    student.insert({106,'d'});
    map<int,char>::iterator itr;
    for(itr=student.begin();itr!=student.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<"first element "<<student.begin()->first<<" "<<student.begin()->second<<endl;
    cout<<"size of map: "<<student.size()<<endl;
    cout<<"maximum size of map: "<<student.max_size()<<endl;
    cout<<student.erase(104)<<endl;
    auto it=student.find(102);
    student.erase(it);
    for(itr=student.begin();itr!=student.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    student.clear();
    cout<<"is map empty? "<<student.empty();
}