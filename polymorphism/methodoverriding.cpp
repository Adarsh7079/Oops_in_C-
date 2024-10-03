#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog:public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main()
{
    Dog ob1;
    ob1.speak();
    return 0;
}