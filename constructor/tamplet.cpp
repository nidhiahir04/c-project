#include<iostream>
using namespace std;
//1 class,1 argument...
template<class t>
void display(t a)
{
    cout<<"dispay template:" <<a <<endl;
}
//2 class,2 argument...
template<class t, class y>
void display(t a, y b)
{
    cout<<"display template:"<<a <<'\t' <<b <<endl;
}
//1 class,2 argument...
template<class t>
t display(t a, t b)
{
    return a+b;
}
int main(){
    display(10);
    display('A',10);
    display(10.20,'B');

    cout<<display(30,40);
}