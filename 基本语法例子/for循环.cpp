#include <iostream>
using namespace std;
int main()
{
    for(int line=1 ;line<+9 ; line++ )
    {
        for(int col = 1 ; col <=line ; col++)
        {
            cout << col << "x" << line << "=" << col*line << "\t";
        }
        cout << endl;
    }
    return 0;
}