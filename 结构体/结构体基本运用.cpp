#include <iostream>
using namespace std;
int main()
{
    struct Student
    {
        string Name;
    };
    struct Student stu;

    for(int i=1; i<=3; i++)
    {
         
        cout << "正在输入第"  << i << "个学生姓名" << endl;
        cin >> stu.Name;
        cout << "学生姓名:" << stu.Name << endl;

    }
    return 0;
}