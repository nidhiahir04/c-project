#include<iostream>
using namespace std;
int main(){
  int math,hindi,english,total=0;
  float marks;

  cout<<"enter the marks of math:";
  cin>>math;
  cout<<"enter the markse of hindi:";
  cin>>hindi;
  cout<<"enter the marks of english:";
  cin>>english;
  total = math+hindi+english;
  marks = total/3; 
  if(marks>75){
    cout<<"grade a";
  }else if(marks<75 && marks>=60){
    cout<<"grade b";
  }else if(marks<60 && marks>=45){
    cout<<"grade c";
  }else if(marks<45 && marks>=35){
    cout<<"grade d";
  }else{
    cout<<"faill";
  }

return 0;
}