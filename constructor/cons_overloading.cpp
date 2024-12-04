#include<iostream>
using namespace std;
class hello
{
    public:
    hello(){
        cout<<"default consructor call"<<endl;
    }
    hello(int a){
        cout<<"value of a"<<a<<endl;
    }
    hello(int a, int b){
        cout<<"value of sum a+b=" <<a+b <<endl;
    }
    hello(float c, char d){
        cout<<"value of sum c+d=" <<c+d;
    }

};
int main(){
    class hello s1, s2(10),s3(10,30),s4(40.0,'A');
    
}