#include<iostream>
using namespace std;

class A{
    public:
    int a;
    int b;

    int sum(){
        return a+b;
    }

    void operator+(A &obj){
        int value1 = this-> a;
        int value2 = obj.a;
        cout << "Answer is " << value2-value1 << endl;
    }

    void operator() (){
        cout << "Mai bracket hu " << this->a << endl;
    }

/*    void operator:: (){                                // this operator cannot be overloaded
        cout << "Mai Dot hu " << this->a << endl;
    }               */
};

int main(int argc, char const *argv[])
{
    A obj1,obj2;
    obj1.a = 5;
    obj2.a = 8;
    obj1 + obj2;

    obj1();
    return 0;
}
