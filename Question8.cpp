#include<iostream>
using namespace std;
class Matrix
{
    private:
      int a[3][3];
    public:
     void accept();
     void display();
     int operator-();
};
void Matrix::accept()
{
    cout<<"Enter the elements of 3*3 matrix";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cin>>a[i][j];
            
        }
        cout<<"\t";
    }
}
void Matrix::display()
{
    cout<<"\n \n Matrix is ...";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<" ";
            cout<<a[i][j]<<"\t";
            
        }
        cout<<"\n";
    }
    
}
int Matrix::operator-()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=-a[i][j];
        }
    }
}
int main()
{
    Matrix m;
    m.accept();
    m.display();
    -m;
    m.display();
    return 0;
}
