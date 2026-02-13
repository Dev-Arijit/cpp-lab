#include <iostream>
using namespace std;

int main()
{
    /*  // square star pattern  ****   ****   ****   ****
      int n;
      cout <<"Enter the number of rows you want in the pattern: "<<endl;
      cin >> n;
      int i = 0;
      while(i<n){
          int j = 0;
          while(j<n){
              cout << "*" ;
              j++;
          }
          cout <<endl;
          i++;
      }   */

    /*  //number patter 1 1 1   2 2 2   3 3 3
      int n;
      cout <<"Enter the number of rows you want in the pattern: "<<endl;
      cin >> n;
      int i = 1;
      while(i<=n){
          int j = 0;
          while(j<n){
              cout << i <<" " ;
              j++;
          }
          cout << endl;
          i++;
      }    */

    /*   // number pattern  1 2 3 4   1 2 3 4   1 2 3 4   1 2 3 4   1 2 3 4
       int n;
       cout <<"Enter the number of rows you want in the pattern: "<<endl;
       cin >> n;
       int i = 0;
       while (i<n){
           int j = 1;
           while(j <= n){
               cout << j << " ";
               j++;
           }
           cout << endl;
           i++;
       }    */

    /*  // 3 2 1   3 2 1   3 2 1
      int n;
      cout <<"Enter the number of rows you want in the pattern: "<<endl;
      cin >> n;
      int i = 0;
      while(i<n){
          int j = 1;
          while (j<=n){
              cout << n-j+1 << " ";
              j++;
          }
          cout << endl;
          i++;
      }  */

    // 1 2 3   4 5 6   7 8 9
    /*   int n;
       cout <<"Enter the number of rows you want in the pattern: "<<endl;
       cin >> n;
       int i = 0,k=1;
       while (i <n){
           int j = 0;
           while(j<n){
               cout << k << " ";
               k++;
               j++;
           }
           cout <<endl;
           i++;
       }  */

    // *   **   ***   ****
    /*   int n ;
       cout << "Enter the number of rows you want: " ;
       cin >> n;
       int i = 0;
       while (i < n){
           int j = 0;
           while(j <= i){
               cout << "* ";
               j++;
           }
           cout << endl;
           i++;
       }   */

    // 1   22   333   4444
    /*  int n ;
      cout << "Enter the number of rows you want in the pattern: ";
      cin >> n;
      int i = 1;
      while(i <= n){
          int j = 1;
          while (j <= i){
              cout << i << " ";
              j++;
          }
          cout << endl;
          i++;
      }   */

    // 1   2 3   4 5 6   7 8 9 10
    /*  int n ;
      cout << "Enter the number of rows you want in the pattern: ";
      cin >> n;
      int i = 1;
      while (i <=n){
          int j = 1;
          while (j )

      }
      Could not do
          */

    // 1   2 1   3 2 1   4 3 2 1
    /*   int n ;
       cout << "Enter the number of rows you want in the pattern: ";
       cin >> n;
       int i = 1;
       while(i <=n){
           int j = 1;
           while(j <= i){
               cout << (i-j+1) << " ";
               j++;
           }
           cout << endl;
           i++;
       }   */

    // a b c   b c d   c d e
    /*   int n ;
       cout << "Enter the number of rows you want in the pattern: ";
       cin >> n;
       int i = 0;
       while(i < n){
           int j = i;
           while(j < n+i){
               char ch = 65 + j;
               cout << ch << " ";
               j++;
           }
           cout << endl;
           i++;
       }   */

    //  A   B C   C D E   D E F G
    /*  int n ;
      cout << "Enter the number of rows you want in the pattern: ";
      cin >> n;
      int i = 0;
      while (i < n){
          int j = 0;
          while(j <= i){
              char ch = 65 + i + j;
              cout << ch << " ";
              j++;
          }
          cout << endl;
          i++;
      }   */

    // D   C D   B C D   A B C D
    /*  int n ;
      cout << "Enter the number of rows you want in the pattern: ";
      cin >> n;
      int i = 1;
      while(i <= n){
          int j =1;
          char val = 65 + n - i;
          while(j <= i){
              cout << val << " ";
              j++;
              val++;
          }
          cout << endl;
          i++;
      }   */

    //      *       **     ***    ****   *****
    /*  int n ;
      cout << "Enter the number of rows you want in the pattern: ";
      cin >> n;
      int i = 1;
      while(i <= n){
          int j = 1;
          while(j <= n-i){
              cout << " ";
              j++;
          }
          int k = 1;
          while(k <= i){
              cout << "*";
              k++;
          }
          cout << endl;
          i++;
      }   */

    //     1     121    12321   1234321
    /*   int n ;
       cout << "Enter the number of rows you want in the pattern: ";
       cin >> n;
       int i = 1;
       while(i <= n){
           int j = 1;
           while(j <= n-i){
               cout << " ";
               j++;
           }
           int k = 1;
           while(k <= i){
               cout << k;
               k++;
           }
           int l = 1;
           while(l <= i-1){
               cout << i-l;
               l++;
           }
           cout << endl;
           i++;
       }    */

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            if(i + j == 10){
                break;
            }

            cout << i << " " << j << endl;
        }
    }
}