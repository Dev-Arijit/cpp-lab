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

    //Calling destructor
    ~Hero(){
        cout << "Destructor bhai called " << endl;
    }

};


int main(int argc, char const *argv[])
{
    Hero h1;

    Hero *h2 = new Hero;
    delete h2;
 
}
