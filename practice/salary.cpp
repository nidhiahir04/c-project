#include<iostream>
using namespace std;
int main(){
    int salary;
   float gross,hra,da;
    cout<<"enter the salary";
    cin>>salary;

    if(salary>1 && salary<=5000){
        hra=salary*8/100;
        da=salary*20/100;
        gross=salary+hra+da;
        cout<<"gross salary of employee" <<gross;

    }else if(salary>5001 && salary<=10000){
        hra=salary*12/100;
        da=salary*30/100;
        gross=salary+hra+da;
        cout<<"gross salary of employee" <<gross;

    }else if(salary>10001 && salary<+15000){
        hra=salary*15/100;
        da=salary*40/100;
        gross=salary+hra+da;
        cout<<"gross salary of employee" <<gross;

    }else if(salary>=15000){
        hra=salary*20/100;
        da=salary*50/100;
        gross=salary+hra+da;
        cout<<"gross salary of employee" <<gross;

    }else{
        cout<<"salary is not acceptable";
    }


return 0;    
}