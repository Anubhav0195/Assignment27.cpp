#include<iostream>
using namespace std;
class Number
{
    private:
      int x,y,z;
      public:
       void input()
       {
        cout<<"Enter the three numbers";
        cout<<"Enter the first number\n";
        cin>>x;
        cout<<"Enter the second number\n";
        cin>>y;
        cout<<"Enter the thord number\n";
        cin>>z;

       }
       void display()
       {
        cout<<" "<<x<<"\t"<<y<<"\t"<<z;
       }
       void operator -()
       {
        x=-x;
        y=-y;
        z=-z;
       }
};
int main()
{
    Number num;
    num.input();
    cout<<"Numbers are: ";
    num.display();
    -num;
    cout<<"Negative numbers are:";
    num.display();
    return 0;
}