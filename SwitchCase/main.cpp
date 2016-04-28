#include <iostream>

using namespace std;

int main()
{  for ( ;true; )
       {  char a;
          cout << "input a word:";
          cin >> a;
          if   ( a=='Q' )
               { cout << "you input Q" << endl;
                 break;
               }
          else { cout << a << endl;
               }
        }
    return 0;
}
