#include <iostream>     //此例子还有switch的运用
using namespace std;
int get_min(int a,int b)
{
    int min = a<=b?a:b;
    return min;
}
int get_max(int a, int b)
{
    int max = a<=b?b:a;
    return max;
}
struct  MaxAndMin 
//这里作用于全局作用域，所以下面的函数和mian函数中都能直接使用
{
    int min;
    int max;
};
MaxAndMin get_max_and_min(int a,int b)
{
    int min = get_min(a,b);
    int max = get_max(a,b);
    MaxAndMin v ={min, max};
    return v;
}
int main()
{
MaxAndMin v = get_max_and_min(5,4);
cout << "结构体中最小值："  << v.min << endl;
cout << "结构体中最大值："  << v.max << endl;
return 0;
}