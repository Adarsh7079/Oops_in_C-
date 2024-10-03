#include<bits/stdc++.h>
using namespace std;
class Code{
    private:
    int rank;

    public:
    string platform="null";

    Code(){
        cout<<"This is Default Constructor"<<endl;
    }

    void print(){
        cout<<"Rank is : "<<rank<<endl;
    }

    int getrank(){
        return rank;
    }
    string get_platform(){
        return platform;
    }
    void setrank(int r){
      rank=r;
    }
    void setplatform(string f){
        platform=f;
    }
    
};
int main()
{
    Code adarsh;
    Code * a=new Code();
    return 0;
}