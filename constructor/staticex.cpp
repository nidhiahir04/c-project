#include<iostream>
#include <string.h>
using namespace std;
class Student{
     private:
            int s_id;
            string s_name;
            int hindi,eng,math;
            float total;
    
    public:
    static int static_member;

    Student()
    {
        static_member++;
    }
    void input()
    {
        cout<<"enter the id of student:" <<endl;
        cin>>s_id;
        cout<<"enter the name of student:" <<endl;
        cin>>s_name;
        cout<<"enter the marks of hindi:" <<endl;
        cin>>hindi;
        cout<<"enter the markse of english:" <<endl;
        cin>>eng;
        cout<<"enter the marks of math:" <<endl;
        cin>>math;
        cout<<"marks of total:"<<endl;
        cin>>total;
       
    }

    void display()
    {
        cout<<"student id:" <<s_id <<endl;
        cout<<"student name:"<<s_name <<endl;
        cout<<"hindi markse:"<<hindi <<endl;
        cout<<"english marks:"<<eng <<endl;
        cout<<"math markss:"<<math  <<endl;
        cout<<"total marks:"<<total <<endl;
       
    }
};
int Student::static_member = 0;
int main(){
    Student s1;
    s1.input();
    s1.display();

    //cout<<"no. of objects in the class" <<Student :: static_member <<endl;
    return 0;
}