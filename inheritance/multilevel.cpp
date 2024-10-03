#include<bits/stdc++.h>
using namespace std;
 
 class animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speak"<<endl;
    }
 };
 class Dog:public animal{

 };
 class GermanShephed:public animal{

 };
int main()
{
    GermanShephed g;
    g.speak();
   
    return 0;
}