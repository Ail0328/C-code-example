//这个例子的随机数代码我是直接ai的，现在不能理解，等后面学到了再添加自己理解
#include <iostream>
#include <random>  //这个是调取随机数库
using namespace std;
int main()
{    //创建一个随机数引擎（类似于设置种子）
    //rd 是硬件随机数生成器，用来给引擎提供真正的随机数种子
    random_device rd;
    mt19937 gen(rd());
    //定义一个分布范围是闭区间
    uniform_int_distribution<int> distrib(1,100);
    int num[10];
    for(int i=0 ; i<=9 ; i++)
    {
        //生成随机数
        num[i]=distrib(gen);
        cout << num[i] << " ";
    }
    cout <<endl;
    int max=num[0],min=num[0];
    for(int element: num)
    {
        
        if(element>max)
        {
            max=element;
        }

        if(element<min)
        {
            min=element;
        }
    }
    cout << "max=" << max << endl << "min=" << min << endl;
    return 0;

}