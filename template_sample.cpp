#include <iostream>
using namespace std;

template<typename T> 
T add(T a, T b){ return a+b; }

template<typename T=int>
T sub(T a, T b){ return a-b; }

template<typename T, int p=2>
T exx(T a){ return a*p; }


int main()
{
    cout<< exx<double>(3.1)<<endl;
    return 0;
}
