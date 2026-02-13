#include<iostream>
using namespace std;

class Hero{
    public:
    int level;
    static int health;
    static int timeToComplete;

    static int random(){
        return health ;
    }
};

int Hero::health = 0;

// initialization = dataType classsName::funcName = value
int Hero::timeToComplete = 5;

int main(int argc, char const *argv[])
{
    cout << Hero::timeToComplete << endl;
    
    cout << Hero::random() << endl;
    
    return 0;
}
