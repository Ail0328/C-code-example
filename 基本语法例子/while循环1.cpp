#include <iostream>
using namespace std;
int main()
//我们要计算1到100的求和
{
    int a=0,b=1;//b是循环因子，没有它代码将无限循环
    while (b<=100)
    //循环体，当条件为true时执行循环
    {
        a=a+b;
        b++;//使循环因子产生变化，从而当条件不满足时结束循环
    }
    cout << "1到100的合为:" << a << endl; 
    return 0;
}