#include<iostream>
using namespace std;

class human{

    protected:
    int weight;
    public:
    int height;
    int age;
    string name;

    int getAge(){
        return age;
    }
    void setWeight(int w){
        this-> weight = w;
    }
};

class male : public human{
    public:
    int colour;

    void sleep(){
        cout << "Male sleeping..." << endl;
    }

};

class male2 : protected human{
    public:
    int colour;

    void sleep(){
        cout << "Male sleeping..." << endl;
    }
    int getHeight(){
        return height;
    }
};

class male3 : private human{
    public:
    int colour;

    void sleep(){
        cout << "Male sleeping..." << endl;
    }
};


int main(int argc, char const *argv[])
{
    male m1;
    male2 m2;
    male3 m3;

    cout << m1.height<< endl;
    // cout << m1.weight<< endl;      not possible
    // cout << m2.height<< endl;      not possible
    cout << m2.getHeight() << endl;

    // cout << m3.height<< endl;      not possible
    return 0;

}