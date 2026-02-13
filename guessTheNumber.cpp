#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));
    int number = rand() % 101;
    cout << "Wellcome to the guess the number game \nComputer has taken a number between 1 to 100 and you have to guess it \nNow guess the number " << endl;
    int in, a = 0;
    do
    {
        cin >> in;
        
        if (in > number + 20)
        {
            cout << "You are too far. Guess something smaller" << endl;
        }
        else if (in < number - 20)
        {
            cout << "You are too far. Guess something bigger" << endl;
        }
        else if (in > number + 10 && in <= number + 20)
        {
            cout << "You are close. Guess something smaller" << endl;
        }
        else if (in < number - 10 && in >= number - 20)
        {
            cout << "You are close. Guess something bigger" << endl;
        }
        else if (in > number && in <= number + 10)
        {
            cout << "You are so close. Guess something smaller" << endl;
        }
        else if (in < number && in >= number - 10)
        {
            cout << "You are so close. Guess something bigger" << endl;
        }
        a++;
    }while(in != number);
    cout << "Congratulations, You have guessed the number.\nIt was  " << number << endl;
    cout << "You have done it in " << a << " attempts" << endl;
    return 0;
}