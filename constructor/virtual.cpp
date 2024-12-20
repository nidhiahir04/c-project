#include<iostream>
using namespace std;

class Base{
    public:
    virtual void display()
    {
        cout<<"base class function";
    }
};
class Derive:public Base
{
  public:
  void Display(){
    cout<<"derive class function call";
  }
};
int main(){
    Base *p;
    Derive obj;
    p=&obj;
    p->display();

}