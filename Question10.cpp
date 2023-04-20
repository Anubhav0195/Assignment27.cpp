#include<iostream>
using namespace std;
class Matrix
{
    private:
       int a[3][3];
    public:
    int operator +(Matrix x);
    void accept();
    void display();
    
};
void Matrix:: display()
    {
        for(int i=0;i<3;i++)
        {
            cout<<" ";
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<"\t";
            }
        }
        cout<<"\n";
    }
void Matrix:: accept()
    {
        cout<<"Enter the elements of a matrix"<<endl;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<" ";
                cin>>a[i][j];

            }
            
        }
    }
int Matrix:: operator +(Matrix x)
{
    int mat[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            mat[i][j]=a[i][j]+x.a[i][j];
        }
    }
    cout<<"Addition of matrix...\n";
    for(int i=0;i<3;i++)
    {
        cout<<" ";
        for(int j=0;j<3;j++)
        {
            
            cout<<mat[i][j]<<"\t";
        }
        cout<<"\n";
    }



}
int main()
{
    Matrix m1,m2,m3;
    m1.accept();
    m2.accept();
    m1.display();
    m2.display();
    m1.operator+(m2);
    return 0;
    


}