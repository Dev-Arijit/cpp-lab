#include <iostream>
using namespace std;

class Hero{

    public:
    int health;
    char level;

    private:
    char name[100];

    protected:

};

class empty{
    // This is a empty class 
    // Memory allocated for this class is 1 byte
};

int main(int argc, char const *argv[])
{
    empty e;
    // cout << sizeof(e) << endl;
    Hero ramesh;
    // cout << sizeof(ramesh) << endl;
    
    ramesh.health = 50;
    ramesh.level = 'A';
    cout << "Health is " << ramesh.health << endl;
    cout << "Level is " << ramesh.level << endl;
    
    return 0;
}
