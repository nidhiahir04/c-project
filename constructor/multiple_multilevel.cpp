#include<iostream>
using namespace std;
class Base1{
    protected:
    int a;
    public:
    void setA(){
        cout<<"enter the value of a:";
        cin>>a;
    }
};
class Base2: public Base1{
    protected:
    int b;
    public:
    void setB(){
        cout<<"enter the value of b:";
        cin>>b;
    }
};
class Derive: public Base2{
    public:
    void product(){
        cout<<"multiple a and b:"<<a*b;
    
    }
};
int main(){
    Derive s1;
    s1.setA();
    s1.setB();
    s1.product();

}