#include<iostream>
using namespace std;
class complex
{
  int x;
  int y;
  public:
  complex()
 {
    x=0;
    y=0;

 }
 complex(int a, int b)
 {
    x=a;
    y=b;
 }
 complex operator-(complex z){
    complex t;
    t.x=x-z.x;
    t.y=y-z.y;
    return t;
 }
 void printdata()
 {
    cout<<"value of x:" <<x <<endl;
    cout<<"value of y:" <<y <<endl;
 }
};
int main()
{
    class complex s1,s2,s3;
    s1=complex(30,40);
    s2=complex(10,20);
    cout<<"first object:" <<endl;
    s1.printdata();
    cout<<"second object:" <<endl;
    s2.printdata();
    cout<<"final output:" <<endl;

    s3=s1-s2;
    s3.printdata();

    return 0;
}