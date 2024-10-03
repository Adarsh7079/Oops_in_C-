#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void print(){
        cout<<"I am A print"<<endl;
    }
};
class B{
    public:
    void print(){
        cout<<"I am B print"<<endl;
    }
};
class c: public A ,public B{

};

int main()
{
    c ob1;
    // ob1.print(); 
    ob1.A::print();
      ob1.B::print();
    return 0;
}