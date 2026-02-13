#include<iostream>
#include<deque>
using namespace std;

int main(int argc, char const *argv[])
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(int i:d){
        cout << i << " ";
    }cout << endl;

    cout << "Printing first index element " << d.at(1) << endl;
    cout << "Front " << d.front() << endl;
    cout << "Back " << d.back() << endl;
    cout << "is empty " <<d.empty() << endl;
    
    cout <<"Before erase " << d.size() << endl;
    d.erase(d.begin(),d.begin()+1);
    cout <<"After erase " << d.size() << endl;
    for(int i:d){
        cout << i << " ";
    }cout << endl;

    return 0;
}


