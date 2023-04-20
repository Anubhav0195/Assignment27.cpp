#include<iostream>
using namespace std;
class mystring
{
    char str[500];
    public:
    void operator!();
      void accept()
      {
        cout<<"Enter the string";
        cin>>str;

      }
      void display()
      {
        cout<<str;
      }
        
};
void mystring::operator!()
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    cout<<"Reverse case  string is "<<str;

}
int main()
{
    mystring s;
    s.accept();
    cout<<"string is...";
    s.display();
    !s;
    return 0;

}
