#include <iostream>
using namespace std;
//这个例子是创建一个十个元素的数组并移除掉下标为0和5的元素
int main()
{
    int *p_Arr = new int[10] {1,2,3,4,5,6,7,8,9,10};
    int *p_NewArr = new int[8];
    int offset=0;
    for(int i=0; i<10; i++)
    {
        if(i==0 || i==5)
        {
            offset++;           //这是偏移量
            continue;
            
        }
        *(p_NewArr+i-offset) = *(p_Arr+i);   
    }
    delete[] p_Arr;             //根据需求来，老数组要就不用清理
    p_Arr = nullptr;
    /*我们也可以将旧指针指向新指针的内存地址，这时
    他们的内容就一模一样了，而且还能避免我们重复释放内存   */
    //p_Arr = =p_NewArr;
    for(int i=0; i<8; i++)
    {
        cout << "新数组的元素是：" << *(p_NewArr+i) << endl;//
    }
    return 0;
}
//若是想改为插入的话，只需更改偏移量的正负和根据变量插入位置进行转换