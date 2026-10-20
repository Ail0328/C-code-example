//通过for循环输出1到20之间的奇数
#include <iostream>
using namespace std;
int main()
{
    int i;
    for (i=1 ; i<=20 ; i++ )
    {
    if(i%2==0)
    {
        continue;//改成break的话只会输出1
    }
    cout << i << endl;
    }
    return 0;
}
