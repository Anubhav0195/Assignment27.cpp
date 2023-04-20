#include<iostream>
using namespace std;
class Complex
{
    private:
      int real,img;
    public:
     friend Complex operator+(Complex,Complex);
     friend Complex operator-(Complex);
     void setdata(int x,int y)
     {
        real=x;
        img=y;
     }
     void showdata()
     {
        cout<<endl<<" real="<<real<<"img="<<img;
     }
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
    Complex c1,c2,c3,c4;
    c1.setdata(3,4);
    c2.setdata(5,6);
    c3=c1+c2;
    c3.showdata();
    return 0;

}