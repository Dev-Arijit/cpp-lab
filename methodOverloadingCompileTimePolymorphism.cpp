#include<iostream>
using namespace std;

class A{
    public:

    void sayHello(){
        cout << "Hello Arijit Garai" << endl;
    }
    void sayHello(string name){
        cout << "Hello " << name<< endl;

    }

    int sayHello(string name, int n){                   // cannot be overloaded by only changing the return type
        cout << "Hello " << name << " " << n<< endl;
        return n;

    }
};

int main(int argc, char const *argv[])
{
    A obj1;
    obj1.sayHello();
    obj1.sayHello("Ariit");
    obj1.sayHello("Arijit", 5);

   

    return 0;
}
