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
int main()
{
    A ob1;
    ob1.sayhello();
    return 0;
}