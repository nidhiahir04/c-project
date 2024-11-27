#include<iostream>
using namespace std;

int main(){
    int age=0,birthyear=0,cureentyear=2024;
    cout<<"enter the birth year:";
    cin>>birthyear;
    age=cureentyear-birthyear;
    cout<<"age is"<<age <<endl;
    if(age>=18){
        cout<<"you are eligible for voting";
    }else{
        cout<<"you are not eligible for voting";
    }



return 0;    
}