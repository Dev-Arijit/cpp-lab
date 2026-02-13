#include<iostream>
using namespace std;

class human{
    public:
    int height;
    int weight;
    int age;

    int getAge(){
        return age;
    }
    void setWeight(int w){
        this->weight = w;
    }
};

class male:public human {
    public:
    int colour;

    void sleep(){
        cout << "Male sleeping..." << endl;
    }
};
int main(int argc, char const *argv[])
{
    male obj;
    cout << obj.getAge() << endl;
    obj.setWeight(34);
    cout << obj.weight<<endl;
    obj.sleep();
    return 0;
}
