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
 class pate:public Dog , public animal{

 };
int main()
{
   
    return 0;
}