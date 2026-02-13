#include<iostream>
using namespace std;

class animal{
    public: 
    int age;
    int weight;

    void bark(){
        cout << "Barking..." << endl;
    }
};

class human{
    public:
    string colour;
    
    void speak(){
        cout << "Speaking..." << endl;
    }
};

class hybrid: public human, public animal{

};

int main(int argc, char const *argv[])
{
    hybrid h;
    h.speak();
    h.bark();
    return 0;
}
