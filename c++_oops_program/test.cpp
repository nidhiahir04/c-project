#include<iostream>
using namespace std;
class test
{
    private:
    int testcode;
    char description[20];
    int nocondidate;
    float centerReqd;
    int calculate (int nocondidate);


    public:
    void SCHEDULE()
    {
        cout<<"enter the TestCode:";
        cin>>testcode;
        cout<<"enter the Description:";
        cin>>description;
        cout<<"enter the NoCandidate:";
        cin>>nocondidate;
    }
    void DISPTEST()
    {
       cout<<"TestCode" <<testcode <<endl;
       cout<<"Description" <<description <<endl;
       cout<<"NoCandidate" <<nocondidate <<endl;
       centerReqd=calculate(nocondidate);
       cout<<"center number"<<centerReqd;

    }


};
int test:: calculate (int nocondidate)
{
   return  centerReqd=nocondidate/(100+1);
}
int main()
{
test s1;
s1.SCHEDULE();
s1.DISPTEST();


}