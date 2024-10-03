#include<bits/stdc++.h>
using namespace std;
class Code{
    public:
    int rank=3;
    void print(){
        cout<<"This is Code Class "<<endl;
    }
};
int main()
{
    //Dynamic allocation store in heap
    Code *b=new Code;

    cout<<sizeof(b)<<endl;
    (*b).print(); // D-refrensh
    b->print();
    return 0;
}