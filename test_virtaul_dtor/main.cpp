#include <iostream>
using namespace std;

class A{
public:
    virtual int out()=0;
    virtual ~A(){ cout<<"release A"<<endl; }
};

class B:public A{
public:
    virtual ~B(){ 
        cout<< "release B"<<endl;
        delete m_p;
    }
    virtual int out(){ 
        cout<<"this is b"<<endl; 
        m_p = new int[5];
        return 0; 
    }
private:
    int *m_p;
};
int main(){
    A *pa = new B();
    pa->out();
    delete pa;
    return 1;
}
