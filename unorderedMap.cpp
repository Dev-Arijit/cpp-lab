#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(int argc, char const *argv[])
{
    map<string,int> m;

    pair<string,int> ari = make_pair("Arijit",1);
    m.insert(ari);

    m.insert(make_pair("Rohan",5));

    m["Garai"]= 8;
    m["Garai"]= 2;

    cout<< m["Arijit"]<< endl;
    cout<< m.at("Rohan")<< endl;
    // cout<< m.at("unknown")<< endl;
    cout<< m["unknown"]<< endl;
    
    cout<< m.size()<< endl;
    cout<< m.count("Arijit")<< endl;
    m.erase("Arijit");
    cout<< m.count("Arijit")<< endl;
    cout<< m.size()<< endl;

    map <string,int> :: iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " , " << it->second << endl;
        it++;
    }

    for(auto i: m){
        cout << i->first 
    }
    
    return 0;
}
