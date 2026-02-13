#include<iostream>
using namespace std;

void update2(int &n){
    n++;
}

int main(int argc, char const *argv[])
{
   /* int i = 5;
    int& j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    */

   int i = 5;
   cout << i << endl;
   update2(i);
   cout << i << endl;
   
    return 0;
}
