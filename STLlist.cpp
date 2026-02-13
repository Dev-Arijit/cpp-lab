#include<iostream>
#include<list>
using namespace std;

int main(int argc, char const *argv[])
{
    list<int> l;
    list<int> n(5,100);
    cout <<"Printing n ";
    for(int i:n){
        cout << i <<" ";
    } cout << endl;

    list<int> c(n);
    cout <<"Printing c ";
    for(int i:c){
        cout << i <<" ";
    } cout << endl;

    l.push_back(1);
    l.push_front(2);
    for(int i:l){
        cout << i <<" ";
    } cout << endl;

    l.erase(l.begin());
    cout << "After erase " ;
    for(int i:l){
        cout << i <<" ";
    } cout << endl;

    return 0;
}
