#include<iostream>
using namespace std;
class Area
{
    public:
    Area(double pi,int r)
    {
        float total=0;
        total=pi*r*r;
        cout<<"area of circle" <<total <<endl;
    }
    Area(int w, double l)
    {
        int total=0;
        total=w*l;
        cout<<"area of reactangle" <<total <<endl;
    }
    Area(int h, int b)
    {
        int total=0;
        total=h*b/2;
        cout<<"area of triangle" <<total <<endl;
    }
    Area( int a)
    {
        int total=0;
        total=a*a;
        cout<<"area of square" <<total;
    }
};
int main(){
    class Area s1(3.14,2),s2(5,9.0),s3(20,60),s4(8);

}
