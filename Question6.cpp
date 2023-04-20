#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class cstring
{
    private:
      char str[20];
    public:
       void get_string()
       {
        cout<<"Enter the string"<<endl;
        cin>>str;

       }
       void display()
       {
        cout<<str<<endl;
       }
       cstring operator+(cstring x)
       {
        cstring s;
        strcpy(s.str,str);
        strcat(s.str,x.str);
        return(s);
       }
       int operator==(cstring &t);
};
 int cstring::operator==(cstring &t)
{
    for(int i=0;str[i]!='\0';i++)
    {
        for(int j=0;str[j]!='\0';j++)
        {
            if (str[i]==t.str[j])
            {
                return 0;
            }
            else 
            {
                return 1;
            }
        }

    }
}
int main()
{
    cstring str1,str2,str3;
    int result =0;
    str1.get_string();
    str2.get_string();
    cout<<"\n....................";
    cout<<" first string is"<<endl;
    str1.display();
    cout<<"\n....................";
    cout<<"Second string is "<<endl;
    str2.display();
    cout<<"\n ............................";
    str3=str1+str2;
    cout<<"concatinated string is"<<endl;
    str3.display();
    result=str1==str2;
    if(result == 0)
    {
        cout<<"Both string are equal"<<endl;

    }
    else{
        cout<<"Both string are not equal"<<endl;
    }
    return 0;



}