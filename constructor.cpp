#include <iostream>
#include <string.h>
using namespace std;

class Hero{

    public:

    int health;
    char level;
    char *name;

    Hero(){
        cout << "New constructor called " << endl;
        name = new char[100];
    }
    


    Hero(int heath){
        cout <<"This -> "<< this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

    Hero(Hero& temp){
        cout << "Constructor is called" << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }
    void print(){
        cout <<"Level " << this -> level << endl;
        cout <<"Health " << this -> health << endl;
        cout <<"Name " << this -> name << endl;
    }


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
    void setName(char name[]){
        strcpy(this->name, name);
    }

};


int main(int argc, char const *argv[])
{

 /*   Hero S(45,'A');
    Hero R(S);

    S.print();
    R.print();
    */

 /*  // Statically
    Hero ramesh(55);
    cout <<"Health = " << ramesh.health << endl;
    cout <<"Address of ramesh = " << &ramesh<< endl;

    Hero Iron(45,'A');
    Iron.print();



    // Dynamically   
    Hero *h = new Hero(22);
    h->print();           */

    Hero hero1;
    hero1.setHealth(45);
    hero1.setlevel('A');
    hero1.setName("Arijit");

    hero1.print();
                
    return 0;
}
