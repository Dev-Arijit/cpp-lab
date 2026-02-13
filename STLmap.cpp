#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, string> m;
    m[1] = "Love";
    m[13] = "Babbar";
    m[2] = "Kumar";

    m.insert({5, "Bheem"});
    cout << "Before erase " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "After erase " << endl;
    m.erase(2);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }

    return 0;
}
