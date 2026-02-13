#include <iostream>
using namespace std;

void update(int **p){
    // p = p + 1;

    // *p = *p + 1;

    **p = **p + 1;
}

int main(int argc, char const *argv[])
{
    int a = 5;
    int *ptr = &a;
    int **ptr2 = &ptr;

   /* cout << "val of a " << a << endl;
    cout << "add of a " << &a << endl;
    cout << "add of a " << ptr << endl;
    cout << "val of a " << *ptr << endl;
    cout << "val of ptr " << ptr << endl;
    cout << "add of ptr " << &ptr << endl;
    cout << "add of ptr " << ptr2<< endl;
    cout << "val of ptr " << *ptr2 << endl;
    cout << "val of a " << **ptr2 << endl;
    cout << "val of ptr2 " << ptr2 << endl;
    cout << "add of ptr2 " << &ptr2 << endl;
    */

    cout << endl;
    cout << "Before " << a << endl;
    cout << "Before " << ptr << endl;
    cout << "Before " << ptr2 << endl;
    update(ptr2);
    cout << "After " << a << endl;
    cout << "After " << ptr << endl;
    cout << "After " << ptr2 << endl;

    return 0;
}
