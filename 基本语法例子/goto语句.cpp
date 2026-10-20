#include <iostream>
using namespace std;
/*
   label1:
   ...;
   ...;
   goto label1;
   label2:
   ...;
   ...;
*/
int main()
{
    a:
    cout << "a" << endl;
    goto c;
    b:
    cout << "b" << endl;
    c:
    cout << 'c' << endl;
    
    return 0;
}