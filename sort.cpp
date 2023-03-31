#include<iostream>
#include <algorithm> // for sort function
#include<vector>
using namespace std;

void show(int a[])
{
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void print_vector(vector<int> v)
{
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[10]={43,6,23,4,12,89,6,0,-5,89};
    cout<<"array before sorting"<<endl;
    show(arr);
    sort(arr,arr+10);
    //sort(arr,arr+5) we can sort upto as many elements we want
    cout<<"array after sorting in ascending order"<<endl;
    show(arr);
    sort(arr,arr+10,greater<int>());
    cout<<"array after sorting in descending order"<<endl;
    show(arr);

    vector<int> v;
    v.push_back(23);
    v.push_back(12);
    v.push_back(32);
    v.push_back(56);
    v.push_back(89);
    v.push_back(8);
    v.push_back(13);
    v.push_back(6);
    v.push_back(-56);
    v.push_back(9);
    v.push_back(71);
    
    cout<<"vector before sorting"<<endl;
    print_vector(v);

    sort(v.begin(),v.end());
    //sort(v.begin(),v.begin()+5); we can sort upto as many elements we want
    cout<<"vector after sorting in ascending order"<<endl;
    print_vector(v);

    sort(v.begin(),v.end(),greater<int>());
    cout<<"vector after sorting in descending order"<<endl;
    print_vector(v);
}