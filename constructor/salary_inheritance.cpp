#include<iostream>
using namespace std;
class Sal{
    public:
    int sal;
    float gross,hra,da;
};
class Gross:public Sal{
   public:
   void input(){
    cout<<"enter the employee salary";
    cin>>sal;
   }
   void printdata(){
    if(sal>1 && sal<=5000){
    hra=sal*8/100;
	da=sal*20/100;
	gross=sal+hra+da;
	cout<<"gross salary in employee"<<gross;
}else if(sal>5000 && sal<=10000){
    hra=sal*12/100;
	da=sal*30/100;
	gross=sal+hra+da;
	cout<<"gross salary in employee"<<gross;
}else if(sal>10000 && sal<=15000){
    hra=sal*15/100;
	da=sal*40/100;
	gross=sal+hra+da;
	cout<<"gross salary in employee"<<gross;       
}else if(sal>=15000){
    hra=sal*20/100;
	da=sal*50/100;
	gross=sal+hra+da;
	cout<<"gross salary in employee="<<gross;
}else{
cout<<"salary is not exepted";
}
}
};
int main(){
   Gross s1;
   s1.input();
   s1.printdata();

}
