#include <iostream>     //此例子还有switch的运用
using namespace std;
int main()
{
enum Color{
    RED,
YELLOW,
BLUE
};

int num;
cin >> num;
switch (num)
{
    case RED:
cout << "红色" << endl;
break;
case YELLOW:
cout << "黄色" << endl;
break;
case BLUE:
cout << "蓝色" << endl;
break;
default:
cout << "输入数字不对，请重试" << endl;
}
return 0;
}