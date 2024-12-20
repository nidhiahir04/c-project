#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    public:
    void setA(){
        cout<<"enter the calue of a:";
        cin>>a;
    }
};
class Derive1:public Base{
    protected:
    int b;
    public:
    void setB(){
        cout<<"enter the value of b:";
        cin>>b;
    }
    void sum(){
        cout<<"value a and b sum="<<a+b <<endl;

    }
};
class Derive2:public Base{
    protected:
    int c;
    public:
    void setC(){
        cout<<"enter the value of c:";
        cin>>c;
    }
    void mult(){
        cout<<"value a and b mult="<<a*c;

    }
};
int main(){
    Derive1 obj1;
    obj1.setA();
    obj1.setB();
    obj1.sum();

   Derive2 obj2;
   obj2.setA();
   obj2.setC();
   obj2.mult();

}
