#include<iostream>
using namespace std;
class Area
{
    public:
    Area(int a)
    {
        int total=0;
        total=a*a*a;
        cout<<"area of cube:" <<total <<endl;
    }
    Area(float l, double b, int h)
    {
        int total=0;
        total=l*b*h;
        cout<<"area of cuboid:" <<total <<endl;
    }
    Area(double pi, int h, int r)
    {
        float total=0;
        total=3.14*r*r*h;
        cout<<"area of cylinder:" <<total <<endl;
    }
    Area( double pi, int r)
    {
        float total=0;
        total=4/3*r*r*r;
        cout<<"area of sphere:" <<total <<endl;
    }
};
int main(){
    class Area s1(8),s2(3,5,6),s3(4,7),s4(5);

}
