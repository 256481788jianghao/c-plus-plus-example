#include <iostream>
using namespace std;

template<typename T> 
T add(T a, T b){ return a+b; }

template<typename T=int>
T sub(T a, T b){ return a-b; }

template<typename T, int p=2>
T exx(T a){ return a*p; }

template<typename T, int p>
T exx2(T a){ return a*p; }


int main()
{
    cout<< exx2<double,5>(3.1)<<endl;
    return 0;
}
