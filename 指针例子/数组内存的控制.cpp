#include <iostream>
#include <random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(1,100);
    int *p = new int[10];
    for(int i =0 ; i<10 ; i++)
    {
        p[i]=distrib(gen);
        cout << *(p+i) << " ";
    }
    delete[] p;
    return 0;
}