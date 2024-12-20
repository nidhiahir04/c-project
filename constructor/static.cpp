#include<iostream>
using namespace std;
class Base
{
    static int count;
    int a=0;
    public:  
    Base(){
        count++;
        a++;
    }   
    void printdata(){
        cout<<"value of a:"<<a <<endl;
    }
    static void print(){
        cout<<"value of count:"<<count <<endl;
    }
};
int Base :: count =5;

int main(){
    class Base x;
    x.printdata();
    x.print();
    class Base y;
    y.printdata();
    y.print();
    class Base z;
    z.printdata();
    z.print();
}
