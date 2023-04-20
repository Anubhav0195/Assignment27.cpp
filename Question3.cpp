#include<iostream>
using namespace std;
class Complex
{
    private:
      int real,img;
    public:
       void setdata(int X,int Y)
       {
         real =X;
         img=Y;
       }
       void showdata()
       {
        cout<<"real="<<real<<"+"<<"img="<<img<<"i"<<endl;
       }
       friend Complex operator+(Complex,Complex);

};
Complex operator+(Complex X,Complex Y)
{
    Complex temp;
    temp.real=X.real+Y.real;
    temp.img=X.img+Y.img;
    return temp;
}
int main()
{
    Complex c1,c2,c3;
    c1.setdata(2,5);
    c2.setdata(7,8);
    c3=c1+c2;
    c3.showdata();
    return 0;
}