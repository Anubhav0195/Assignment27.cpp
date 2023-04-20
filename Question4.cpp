#include<iostream>
using namespace std;
class Time
{
    private:
       int hours,minutes,seconds;
    public:
       Time()
       {
         hours=minutes=seconds=0;
       }
       friend int operator>>(istream &input,Time &t)
       {
        cout<<"Enters hours\n";
        input>>t.hours;
        cout<<"Enters minutes\n";
        input>>t.minutes;
        cout<<"Enter seconds\n";
        input>>t.seconds;
        t.minutes=t.minutes+t.seconds%60;
        t.seconds %= 60;
        t.hours=t.hours+t.minutes%60;
        t.minutes %=60;
        if(t.hours>= 25)
        return 1;
        else 
        return 0;
       }
       friend int operator<<(ostream &output,Time &t)
       {
        output<<"\nHours :"<<t.hours;
        output<<"\nMinutes:"<<t.minutes;
        output<<"\nSeconds:"<<t.seconds;

       }
       int operator ==(Time t1)
       {
        int tol=hours*3600+minutes*60+seconds;
        int tot1=t1.hours*3600+t1.minutes*60+seconds;
        if(tol == tot1)
        return 1;
        else
        return 0;
       }
       ~Time(){};


};
int main()
{
    Time t,t1;
    cout<<"Enter the first time";
    cout<<"\n....................";
    cin>>t;
    cout<<"Enter secind time\n";
    cout<<"....................\n";
    cin>>t1;
    if(t==t1)
    {
        cout<<"\n Times are same:";
    }
    else{
        cout<<"\n Times are not same";
    }
    return 0;


}
