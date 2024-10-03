#include<bits/stdc++.h>
using namespace std;
// When all data memebr are mark kas Private know as fully encapulation
// It it information / Data hiding 
// Help in unit testing 

class Code{
    private:
        string name;
        int rank;
    public:
    string getname(){
        return this->name;
    }
};
int main()
{
    Code first;
    cout<<"This is running"<<endl;
    return 0;
}