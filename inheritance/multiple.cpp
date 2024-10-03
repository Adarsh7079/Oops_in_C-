#include<bits/stdc++.h>
using namespace std;
 
 class animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"barking"<<endl;
    }
 };
 class human{
    public:
    string color;
    void speak(){
        cout<<"speaking"<<endl;
    }
 };
 class hybrid:public animal ,public human{

 };
int main()
{
    hybrid h1;
    h1.bark();
    h1.speak();
    return 0;
}