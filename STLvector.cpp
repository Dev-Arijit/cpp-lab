#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(2);
    cout << v[0] << endl;
    cout << "Capacity " << v.capacity() << endl;
  
    v.push_back(4);
    cout << v[1] << endl;
    cout << "Capacity " << v.capacity() << endl;

    v.push_back(6);
    cout << v[2] << endl;
    cout << "Capacity " << v.capacity() << endl;
    cout << "Size " << v.size() << endl;

    cout << "2nd index element " << v.at(2) << endl;

    cout << "Front " << v.front() << endl;
    cout << "Back " << v.back() << endl;

    cout << "Before pop " << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "After pop " << endl;

    for (int i : v)
    {
        cout << i << " ";
    }

    cout << "Before clear size" << v.size() << endl;
    v.clear();
    cout << "After clear size" << v.size() << endl;

    return 0;
}
