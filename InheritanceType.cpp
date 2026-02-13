#include<iostream>
using namespace std;

class animal{
    public: 
    int age;
    int weight;

    void speak(){
        cout << "Speaking..." << endl;
    }
};

class dog: public animal{
    public:
    int height;
};

class german: public dog{
    public:
    int colour;
};

int main(int argc, char const *argv[])
{
    dog d;          // single inheritance
    d.speak();
    cout << d.age << endl;
    cout << d.height << endl;

    german g;
    g.speak();
    return 0;
}
