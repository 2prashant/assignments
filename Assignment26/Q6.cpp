/*
6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details.
*/
#include<iostream>
using namespace std;
#include<string.h>
class student
{
    private:
          char name[30];
          int  roll;
          char  dept[30];
    public:
         student(char d1[30],int d2,char d3[30])
         {
             strcpy(name,d1);
             roll=d2;
            strcpy(dept,d3);           
         }
        void showdata()
        {
            cout<<"Student Name="<<name<<"\n Roll number="<<roll<<"\n department="<<dept<<endl;
        }
};
int main()
{
    student s1("Prashant",23,"CSE");
    s1.showdata();
    return 0;
}
