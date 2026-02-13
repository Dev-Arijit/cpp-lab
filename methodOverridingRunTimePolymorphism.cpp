#include<iostream>
using namespace std;


class human{
    public:
    string colour;
    
    void speak(){
        cout << "Speaking..." << endl;
    }
};

class dog: public human{
    public: 
    int age;
    int weight;

    void speak(){
        cout << "Barking..." << endl;
    }
};

class cat: public human{
    public:
    void speak(){
        cout << "Meow " << endl;
    }
};

int main(int argc, char const *argv[])
{
    dog d;
    cat c;
    human h;
    d.speak();
    d.human::speak();
    c.speak();
    c.human::speak();
    h.speak();
    return 0;
}
