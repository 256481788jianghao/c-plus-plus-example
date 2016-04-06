#include <iostream>
using namespace std;

template<typename T> 
T add(T a, T b){ return a+b; }


int main()
{
    cout<< add<int>(5,6)<<endl;
    cout<< add<double>(3.4,4.0)<<endl;
    return 0;
}
