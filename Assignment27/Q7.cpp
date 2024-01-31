
/*
7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output-
*/
#include<iostream>
using namespace std;
class fraction
{
    private:
           
            long numerator;
            long denominator;
    public:
           fraction(long n=0, long d=0)
           {
                numerator=n;
                denominator=d;
           }
           long getnumerator()
           {
                return numerator;
           }
           long getdenominator()
           {
                return denominator;
           }
           fraction operator++()
           {
              fraction temp;
              temp.numerator=++numerator;
              temp.denominator=++denominator;
              return temp;
           }
           fraction operator++(int dummy)
           {
                fraction temp;
                temp.numerator=numerator++;
                temp.denominator=denominator++;
                return temp;
           }
           friend ostream& operator<<(ostream &os, fraction f);
           friend istream& operator>>(istream &is, fraction &f);
         
           void display()
           {
                cout<<numerator<<"/"<<denominator<<endl;
           }
           
};
ostream& operator<<(ostream &os, fraction f)
{
        os<<"f1  :"<<f.numerator<<"/"<<f.denominator<<endl;
        os<<"f2  :"<<f.numerator<<"/"<<f.denominator<<endl;
        return os;
}
istream& operator>>(istream &is, fraction &f)
{
       cout<<"numerator :";
       is>>f.numerator;
       cout<<"denominator :";
       is>>f.denominator;
       return is;
}
int main()
{
       fraction f1,f2;
       cout<<"Enter 1st Fraction value"<<endl;
       cout<<f1;
       cin>>f1;
       cout<<"f1++ :";
       (f1++);
       f1.display();
       cout<<"++f1 :";
       (++f1);
        f1.display();

       cout<<"Enter 2nd fraction value"<<endl;
       cin>>f2;
        f2=(++f1);
       cout<<" f2 =++f1"<<endl;
       cout<<"f1 :";
        f1.display();
        cout<<"f2 :";
        f2.display();

        cout<<"f2=f1++"<<endl;
         f2=(f1++);
        cout<<"f1 :";
        f1.display();
        cout<<"f2 :";
        f2.display();
         return 0;
}


