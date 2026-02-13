#include <iostream>
using namespace std;
int main(){
    cout << "Enter the amount" << endl;
    int amount ;
    cin >> amount;
    int num = 1, note = 0;
    switch(num){
        case 1: note = amount/100;
                amount -= note*100;
                cout << note << " notes of 100 rupees are required" << endl;
        case 2: note = amount/50;
                amount -= note*50;
                cout << note << " notes of 50 rupees are required" << endl;
        case 3: note = amount/20;
                amount -= note*20;
                cout << note << " notes of 20 rupees are required" << endl;
        case 4: note = amount/10;
                amount -= note*10;
                cout << note << " notes of 10 rupees are required" << endl;
        case 5: note = amount/1;
                amount -= note*1;
                cout << note << " notes of 1 rupees are required" << endl;


    }
}