#include<iostream>
using namespace std;
class person
{
    private:
      int age ;
      int rank;
    public:
      int getage()
      {
        return age;
      }
      int getrank()
      {
        return rank;
      }
      person (int a,int r)
      {
        cout<<"parametrised constructior called"<<endl;
        age=a;
        rank=r;
      }
      person(const person &p)
      {
        cout<<"copy constructior called"<<endl;
        age=p.age;
        rank=p.rank;
      }
      person()
      {
        cout<<"Default constructior called"<<endl;

      }
      person operator+(person p)
      {
        cout<<"Operator+  constructior called"<<endl;
        person temp;
        temp.age=age+p.age;
        temp.rank=rank+p.rank;
        return temp;
      }
      person operator++()
      {
        person temp;
        temp.age=++age;
        temp.rank=++rank;
        return temp;
      }
      void display()
      {
        cout<<"person age "<<age<<"and rank"<<rank<<endl;

      }
      person operator++(int useless)
      {
        person temp;
        temp.age=age++;
        temp.rank=rank++;
        return temp;
      }
      


};

int main()
{
    person p1(20,23);
    person p2=p1;
    person p3=p1+p2;
    (++p3).display();
    (p3++).display();
    p3.display();
    cout<<"Prateek age"<<p1.getage()<<"and rank"<<p1.getrank()<<endl;
    cout<<"Jatin"<<p2.getage()<<"and rank"<<p2.getrank()<<endl;
    cout<<"rishab"<<p3.getage()<<"and rank"<<p3.getrank()<<endl;
    return 0;

}
