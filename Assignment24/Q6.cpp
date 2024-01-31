//6. Define a function to swap data of two int variables using call by reference.
#include<iostream>
using namespace std;
int swapnum(int *num1, int *num2);
int main()
{
    int num1,num2;
    cout<<"Enter two number"<<endl;
    cin>>num1>>num2;
    swapnum(&num1,&num2);
    cout<<num1<<" "<<num2;
}
int swapnum(int *num1, int *num2)
{
     int temp;
     temp=*num1;
     *num1=*num2;
     *num2=temp;
     return (*num1,*num2);

}
