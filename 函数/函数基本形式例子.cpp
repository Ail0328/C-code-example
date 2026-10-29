#include <iostream>     //此例子还有switch的运用
using namespace std;
int get_min(int a ,int b ,int c)
{
    int min = a;
    int min1 = a<=b?a:b;
    if(min <= min1)
    {
        min =a;
    }
    else
    {
        min = min1;
    }
    return min;
}
int main()
{
    int min = get_min(9,5,6);
    cout << "函数的结果是:" << min << endl;
    return 0;
}