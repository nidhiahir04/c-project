#include<iostream>
using namespace std;


class Student
{
    
    int adnum;
    char sname[20];
    float eng,math,hindi;
    float total;
    float ctotal (float eng, float math, float hindi);


     public:
     Student()
     {
      cout<<"enter the adnumber";
      cin>>adnum;
      cout<<"enter the sname";
      cin>>sname;
      cout<<"enter the eng";
      cin>>eng;
      cout<<"enter the math";
      cin>>math;
      cout<<"enter the hindi";
      cin>>hindi;

     }
     void showdata(){
        cout<<"adnumber:"<<adnum<<endl;
        cout<<"sname:"<<sname<<endl;
        cout<<"eng:"<<eng<<endl;
        cout<<"math:"<<math<<endl;
        cout<<"hindi:"<<hindi<<endl;
        cout<<"total:"<<ctotal(eng,math,hindi)<<endl;

     }

   
    
};
float Student::ctotal(float eng, float math, float hindi){
    return eng+math+hindi;
}
int main()
{
    Student s1;
    s1.showdata();
}

