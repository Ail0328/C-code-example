#include <iostream>
using namespace std;
int main()
{
    int num =10;
    int * p;
    p = &num;
    cout << p << endl;
    cout << *p << endl;
    *p = 20;
    cout << num << endl;
    cout << p << endl;
    return 0;

}