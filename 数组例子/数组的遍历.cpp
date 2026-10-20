#include <iostream>
#include <random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(1,100);

    int num[10];
    for(int i=0 ; i<=9 ; i++)
    {
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