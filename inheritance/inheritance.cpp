#include<bits/stdc++.h>
using namespace std;
class Code{
    public:
    int rank,rating;

    int getrank(){
        return this->rank;
    }
    void setrank(int rank){
        this->rank=rank;
    }
};

class human:public Code{
    public:
    string name;
    void sleepCoder(){
        cout<<"Coder is sleeping"<<endl;
    }
};
int main()
{
    human ob1;
    // cout<<ob1.rank<<endl;

    // cout<<ob1.name<<endl;
    ob1.setrank(3);
    ob1.name="Adarsh";
    cout<<ob1.rank<<endl;
    cout<<"Name : "<<ob1.name<<endl;

    ob1.sleepCoder();
    return 0;
}