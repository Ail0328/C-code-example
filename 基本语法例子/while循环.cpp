#include <iostream>
using namespace std;
//九九乘法表例子
int main()
{
  int line = 1;
  while (line <= 9){

    int num=1;
    while (num<=line)//嵌套内循环条件
    {
      cout << num <<"x" << line << "=" << num *line << "\t";//"\t"是上下对齐命令
      num++;
    }
    cout << endl;
    line++;
  }
  return 0;
}