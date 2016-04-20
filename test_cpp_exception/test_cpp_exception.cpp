#include<iostream>
using namespace std;

int mean(int a, int b)
{
    if(0 == a+b)
        throw " error a+b == 0\n";
    int m = a*b/(a+b);
}
int main()
{
    try{
        int p = mean(1,-1);
    }catch(const char *s){
        cout<< s <<endl;
    }
    return 0;
}
