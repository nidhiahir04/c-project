#include<iostream>
using namespace std;
class Hello
{
 public:
 void test()
 {
    cout<<"default function call" <<endl;
 }
 void test(int a)
 {
     cout<<"perameter type function call" <<a <<endl;
 }
 void test(int a, int b)
 {
     cout<<"sum of a+b=" <<a+b <<endl;
 }
 void test(int c, double d)
 {
    cout<<"sum of c+d=" <<c+d <<endl;
 }
};
int main(){
    class Hello s1;
    s1.test();
    s1.test(10);
    s1.test(20,30);

    

}