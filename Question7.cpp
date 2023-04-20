#include<iostream>
using namespace std;
class Fraction
{
    private:
      long num,deno;
    public:
       Fraction(long int n=0,long int d=0)
       {
        num=n;
        deno=d;
       }
       friend void operator>>(istream &in,Fraction &f)
       {
        cout<<"\n Numberator";
        in>>f.num;
        cout<<"\n Denominator";
        in>>f.deno;

       }
       friend void operator<<(ostream &os,Fraction &f)
       {
         os<<f.num<<"/"<<f.deno;
       }
       Fraction operator++()
       {
        Fraction temp;
         ++num;
         ++deno;
        return temp;
       }
       Fraction operator++(int s)
       {
        Fraction temp=*this;
        num++;
        deno++;
        return temp;
       }


};
int main()
{
    Fraction f1,f2;
    cout<<"\n f1: ";
    cout<<f1;
    cout<<"\n f2:  ";
    cout<<f2;
    cout<<"\nEnter the 1st fraction:"<<endl;
    cin>>f1;
    cout<<"\n f1++";
    f1++;
    cout<<f1;
    cout<<"\n ++f1";
    ++f1;
    cout<<f1;
    cout<<"Enter the 2nd fraction :"<<endl;
    cin>>f2;
    f2=++f1;
    cout<<"\n f2 = ++f1";
    cout<<"\n f1  :";
    cout<<f1;
    cout<<"\n  f2 :";
    cout<<f2;
    f2=f1++;
    cout<<"\n f2=f1++";
    cout<<"\n f1  :";
    cout<<f1;
    cout<<f2;
    return 0;




}