#include<iostream>
using namespace std;
class box{
    int l;
    int w;
    int h;
    friend box add(box ,box);
    public:
    void setdata(int a, int b, int c){
        l=a;
        w=b;
        h=c;
    }
    int getvolume(){
        return l*w*h;
    }

};

box add (box x, box y){
    box z;
    z.l=x.l+y.l;
    z.h=x.h+y.h;
    z.w=x.w+y.w;
    return z;

}
int main(){
    box s1,s2,s3;
    s1.setdata(1,1,1);
    s2.setdata(2,2,2);
    cout<<"volum of s1:"<<s1.getvolume()<<endl;
    cout<<"volume of s2:"<<s2.getvolume()<<endl;

    s3=add(s1,s2);
    cout<<"volume of s3:"<<s3.getvolume()<<endl;
}