#include <iostream>
using namespace std;

int main(){
    // *******positive or negative*******
    /*
    int a;
    cin >> a;
    if(a >0){
        cout << "a is positive" << endl;
    }
    else if (a < 0){
        cout << "a is negative" << endl;
    } 
    else{
        cout << "A is 0" << endl;
    }
    */

    // ******greater*******
    /*
    int a,b;
    cout << "Enter A and B" << endl;
    cin >>a >> b;
    if (a > b){
        cout << "A is greater" << endl;
    }
    else if (b > a){
        cout << "B is greater" << endl;
    }
    else{
        cout << "Both are equal" << endl;
    }
    */
    
    // *******identify the given character is upper or lowercase or numerical
    /*
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z'){
        cout << "The given charater is a uppercase character" << endl;
    }
    else if (ch >= 'a' && ch <= 'z'){
        cout << "The given character is a lowercase character" << endl;
    }
    else if (ch >= '0' && ch <= '9'){
        cout << "The given character is a numerical" << endl;
    }
    */

    // *******sum of n natural numbers*******
    /*
    int n;
    cout << "Enter how much numbers sum you want" << endl;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n){
        sum += i;
        i++;
    }
    cout << "The sum of "<< n << " numbers is: " << sum<< endl;
    */
    
    // ********sum of all even numbers between 0 to n********
    /*
    int n;
    cout << "Enter the number " ;
    cin >> n;
    int i = 2;
    int sum = 0;
    while(i <= n){
        sum += i;
        i += 2;
    }
    cout << "Sum of even numbers between 0 to " << n <<" is " << sum ;
    */

    // ********Celcius to farenheit table********
    float c = 0,f;
    while (c <= 100){
        f = ((9*c)/5)+32;
        cout << c <<" c = " << f << " f"<< endl;
        c++;
    }

}