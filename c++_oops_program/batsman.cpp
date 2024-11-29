#include<iostream>
using namespace std;
class batsman{
    private:
    int bcode;
    char bname[20];
    int inning,notout,runs;
    float batavg;
    int calcavg(int inning, int notout,int runs);

    public:
    void readdata()
    {
        cout<<"enter the bcode:";
        cin>>bcode;
        cout<<"enter the bname:";
        cin>>bname;
        cout<<"enter the inning:";
        cin>>inning;
        cout<<"enter the notout:";
        cin>>notout;
        cout<<"enter the runs:";
        cin>>runs;



    }
    void displaydata()
    {
      cout<<"bcode:"<<bcode<<endl;
      cout<<"bname:" <<bname <<endl;
      cout<<"inning:" <<inning <<endl;
      cout<<"notout:" <<notout <<endl;
      cout<<"runs:" <<runs <<endl;
      batavg=calcavg(inning,notout,runs);
      cout<<"avarage:"<<batavg <<endl;
    }

};
int batsman:: calcavg(int inning,int notout, int rund)
{
   batavg=runs/(inning-notout); 
   return batavg;
}
int main()
{
    batsman s1;
    s1.readdata();
    s1.displaydata();

}
