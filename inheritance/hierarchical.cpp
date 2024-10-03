#include<bits/stdc++.h>
using namespace std;
class A{
    public:
    void func1(){
        cout<<"Inside Function 1"<<endl;
    }
};
class B:public A{
    public:
    void func2(){
        cout<<"Inside Function 2"<<endl;
    }
};

class c:public A{
    public:
    void fun3(){
        cout<<"Inside function 3"<<endl;
    }
};
int main()
{
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    c obj3;
    obj3.func1();
    // obj3.func2(); error beacuse it is not connected to B class 

    return 0;
}