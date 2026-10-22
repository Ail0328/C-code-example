#include  <iostream>
using namespace std;
int main()
{
    int v1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char v2[] = {'a', 'b', 'c', 'd', 'e'};
    int *vp1 = v1;
    char *vp2 = v2;
    int i;
    for( i=0 ; i<sizeof(v1)/sizeof(v1[0]) ; i++)
    {
        cout << *(vp1+i) << " ";

    }
    cout << endl;
    for(i=0 ; i<sizeof(v2)/sizeof(v2[0]) ; i++)
    {
        cout << *(vp2+i) << " ";
    }
    cout << endl;
    //上面是利用指针加减，打印数组值的例子
    *(vp1+1) = 22;        //这里是利用指针给数组赋值
    cout << v1[1] << endl;

    return 0;
}
