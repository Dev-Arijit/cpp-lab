#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{

    int choice;
    do{

        srand((unsigned int)time(NULL));
        int pc = rand() % 3;
        cout << "Welcome to the Rock Paper Scissors game" << endl;
        cout << "Enter 0 for Rock, 1 for Paper and 2 for Scissor" << endl;
        int user;
        cin >> user;
        switch (user)
        {
        case 0:
            cout << "You : Rock" << endl;
            break;
        case 1:
            cout << "You : Paper" << endl;
            break;
        case 2:
            cout << "You : Scissor" << endl;
            break;
        default: 
            cout << "Invalid choice" << endl;
            break;
        }
        switch (pc)
        {
        case 0:
            cout << "Computer : Rock" << endl;
            break;
        case 1:
            cout << "Computer : Paper" << endl;
            break;
        case 2:
            cout << "Computer : Scissor" << endl;
            break;
        }

        if (pc == user)
        {
            cout << "It's a tie!" << endl;
        }
        else if ((pc == 0 && user == 1) || (pc == 1 && user == 2) || (pc == 2 && user == 0))
        {
            cout << "You win!" << endl;
            
        }
        else
        {
            cout << "Computer wins!" << endl;
          
        }
        
        cout <<"Do you want to play again ?\n1 for yes\n0 for No" << endl;
        cin >> choice;
        
    }while(choice == 1);
    cout << "Thank you for playing" << endl;

    return 0;
}
