#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void sayhello(){
        cout<<"Hello Adarsh"<<endl;
    }
      void sayhello(string name){
        cout<<"Hello"<<name<<endl;
    }
    int sayhello(string name,int n){
        cout<<"Hello"<<name<<endl;
        return 0;
    }
};

class B{
    public:
    int a;
    int b;
    
    int add(){
        return a+b;
    }
    void operator + (B &obj){
        int v1=this->a;
        int v2=obj.a;
        cout<<"output"<<v2-v1<<endl;
    }
    void operator()(){
        cout<<"This is adarsh"<<endl;
    }
};
int main()
{
   B ob1,ob2;

   ob1.a=4;
   ob2.a=7;

   ob1+ob2;
   ob1();
    return 0;
}