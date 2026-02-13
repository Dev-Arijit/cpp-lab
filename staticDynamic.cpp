#include <iostream>
using namespace std;

class Hero{

    private:
    int health;
    char level;

    public:

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setlevel(char l){
        level = l;
    }

};


int main(int argc, char const *argv[])
{
   
    Hero ramesh;   // Static memory

    ramesh.setHealth(50);
    cout <<"Health is " << ramesh.getHealth() << endl;
    
    ramesh.setlevel('A');
    cout <<"Level is " << ramesh.getLevel() << endl;

    cout << sizeof(ramesh) << endl;
    

    Hero *b = new Hero;
    
    // (*b).setHealth(30);
    // (*b).setlevel('B');

    b->setHealth(99);
    b->setlevel('C');
    cout <<"Health is " << (*b).getHealth() << endl;
    cout <<"Level is " << (*b).getLevel() << endl;

    cout <<"Health is " << b->getHealth() << endl;
    cout <<"Level is " << b->getLevel() << endl;

    return 0;
}
