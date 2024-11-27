#include<iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the a variable";
    cin>>a;
    cout<<"enter the b variable";
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"swaping value a" <<a;
    cout<<"swaping value b" <<b;
  return 0;  

}