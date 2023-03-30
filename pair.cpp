#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<char,int> pair1;
    pair1.first='A';
    pair1.second=567;
    cout<<"pair 1 is :\n";
    cout<<pair1.first<<" "<<pair1.second<<endl;

    pair<string,double> pair2("loe",23.56);
    cout<<"pair 2 is :\n";
    cout<<pair2.first<<" "<<pair2.second<<endl;

    pair<int,int>pair3;
    pair3=make_pair(45,9);
    cout<<"pair 3 is :\n";
    cout<<pair3.first<<" "<<pair3.second<<endl;

    pair<int,int>pair4(7,89);
    pair<int,int>pair5(9,17);
    pair<int,int>pair6(pair5); //copy pair 5 into pair 4
    cout<<"pair 6 is :\n";
    cout<<pair6.first<<" "<<pair6.second<<endl;

    cout<<"are pair4 and pair5 equal : "<<(pair4==pair5)<<endl; //necessary to put inside brackets
    cout<<"are pair4 and pair5 unequal : "<<(pair4!=pair5)<<endl;
    cout<<"are pair4 greater than pair5 : "<<(pair4>=pair5)<<endl;

    cout<<"swapping pair4 and pair5"<<endl;
    cout<<"value of pair4 before swapping :"<<endl;
    cout<<pair4.first<<" "<<pair4.second<<endl;
    cout<<"value of pair5 before swapping :"<<endl;
    cout<<pair5.first<<" "<<pair5.second<<endl;
    pair4.swap(pair5);
    cout<<"value of pair4 after swapping :"<<endl;
    cout<<pair4.first<<" "<<pair4.second<<endl;
    cout<<"value of pair5 after swapping :"<<endl;
    cout<<pair5.first<<" "<<pair5.second<<endl;
    return 0;
}