//2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;
class Person
{
    private:
         int age,rank;
    public:
         void getvalue(int x,int y)
         {
             age=x;
             rank=y;
         }
         void printvalue()
         {
            cout<<"age="<<age<<" "<<"Rank="<<rank<<endl;
         }
         Person operator++()//pre increament
         {
             Person temp;
             temp.age=++age;
             temp.rank=++rank;
              return temp;
         }
         Person operator++( int)//post increament
         {
             Person temp;
             temp.age=age++;
             temp.rank=rank++;
             return temp;
         }
         friend Person operator--(Person temp);//pre dicreament
         friend Person operator--(Person temp, int  );//post increament
         friend Person operator+(Person c1, Person c2);


};
Person operator--(Person p)
{
    Person temp;
    temp.age=--p.age;
    temp.rank=--p.rank;
    return temp;
}
Person operator--(Person t , int )
{
    Person temp;
    temp.age=t.age--;
    temp.rank=t.rank--;
    return temp;

}
Person operator+(Person c1, Person c2)
{
    Person temp;
     temp.age=c1.age+c2.age;
     temp.rank=c1.rank+c2.rank;
     return temp;
}
int main()
{
    Person obj1,obj2,obj3;
    obj1.getvalue(23,56);
    obj2.getvalue(12,24);
    obj3=obj1+obj2;
    obj3.printvalue();
    (++obj1).printvalue();
    (--obj2).printvalue();
    (++obj3).printvalue();
    (obj1++).printvalue();
    obj1--.printvalue();
    obj1.printvalue();
    (--obj1).printvalue();
    return 0;
}
