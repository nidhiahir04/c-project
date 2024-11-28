#include<iostream>
using namespace std;
class Student
{
    private:
     int adnum;
     char sname[20];
     float eng,math,science;
     float per=0;
     float total=0;
     float ctotal(float eng, float math, float science);

     
     public:
     void takedata()
    {
        cout<<"enter the adnum:";
        cin>>adnum;
        cout<<"enter the sname:";
        cin>>sname;
        cout<<"enter the eng:";
        cin>>eng;
        cout<<"enter the math:";
        cin>>math;
        cout<<"enter the science:";
        cin>>science;
        
 
    }
     void showdata()
    {
        cout<<"adnumber" <<adnum <<endl;
        cout<<"sname" <<sname <<endl;
        cout<<"eng" <<eng <<endl;
        cout<<"math" <<math <<endl;
        cout<<"science" <<science <<endl;
        cout<<"total" <<ctotal(eng,math,science) <<endl;
       per=ctotal(eng,math,science)/3;
       cout<<"per" <<per <<endl;
    }
};
float Student :: ctotal(float eng, float math, float science){
    return eng+math+science;
}
int main(){

Student s1;
      s1.takedata();
      s1.showdata();
     

      
return 0;    
}