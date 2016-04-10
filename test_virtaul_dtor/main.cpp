#include <iostream>
using namespace std;

class A{
public:
    virtual int out()=0;
    //virtual ~A(){ cout<<" A xigou"<<endl; }
};

class B:public A{
public:
    virtual ~B(){ cout<< "A xigou in B"<<endl;}
    virtual int out(){ cout<<"this is b"<<endl; return 0; }
};
int main(){
    A *pa = new B();
    delete pa;
    return 1;
}
