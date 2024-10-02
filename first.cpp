#include<bits/stdc++.h>
using namespace std;
// implementation hiding 
//  ex:- sending email click on submit to send 

class Vehicle
{
  private:
          void piston()
        {
            cout<<"4 piston\n";
        }

        void manWhoMade()
        {
            cout<<"Markus Librette\n";
        }
    public:
      
        void model()
        {
            cout<<"SIMPLE\n";
        }
        void color()
        {
            cout<<"Red/GREEN/Silver\n";
        }
        void cost()
        {
            cout<<"Rs. 60000 to 900000\n";
        }
        void oil()
        {
            cout<<"PETROL\n";
        }
};
int main()
{
    
    Vehicle obj;
  
    obj.model();
    obj.color();
    obj.cost();
    obj.oil();
}
