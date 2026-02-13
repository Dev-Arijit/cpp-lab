#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
   /* int arr[10] = {2,4,5,7,8,6};
    cout<< "add of 1st memory block " << arr << endl;
    cout<< "add of 1st memory block " << &arr[0] << endl;
    cout<< " 4th " << arr[0] << endl;
    cout<< " 5th " << *(arr) << endl;
    cout<< " 6th " << *(arr+1) << endl;
    cout<< " 7th " << *(arr) +1 << endl;
    cout<< " 8th " << *(arr+2) +1 << endl;
    int i = 3;
    cout << i[arr] << endl;
    cout << *(arr+i) << endl;

   int temp[10] = {1,2};
   int *ptr = &temp[0];
   cout <<"1st " << sizeof(temp) << endl;
   cout << "2nd " << sizeof(*temp) << endl;
   cout << "2nd " << sizeof(ptr) << endl;
   cout << "2nd " << sizeof(*ptr) << endl;
   cout << "2nd " << sizeof(&ptr) << endl;   
    */
   
   int arr[10] = {1,2,3,4};
   char ch[6] = "abcde";
   char *c = &ch[0];
   cout << c << endl;
   cout << *c << endl;
   cout << ch << endl;

    return 0;
}
