//4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int fact (int n)
{
    int fact=1;
    if(n==0)
    {
        return 1;
    }
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;  
}
int comb(int n,int r)
{
    return (fact(n)/(fact(n-r)*fact(r)));
}
int main()
{
    int n,r;
    cout<<"Enter row=";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<comb(i,j)<<" ";
        }
        cout<<endl;
    }
}