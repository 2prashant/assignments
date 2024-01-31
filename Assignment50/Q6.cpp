// 6. Given two integers L, R, and an integer K, the task is to print all the pairs of Prime
// Numbers from the given range whose difference is K using unordered_map.
// Example:
// Input: L = 1, R = 19, K = 6
// Output: (5, 11) (7, 13) (11, 17) (13, 19)
// Explanation: The pairs of prime numbers with difference 6 are (5, 11), (7, 13), (11,
// 17), and (13, 19).

#include<bits/stdc++.h>
using namespace std;
void findPrimeNOS(int L ,int R,unordered_map<int,int> &m)
{
    for(int i=L;i<=R;i++)
    {
        m[i]++;
    }
    //Erase 1 as non-prime 
    if(m.find(1)!=m.end())
    {
        m.erase(1);
    }
    //perform sieve of Erastosthenes
    {
        for(int i=2;i<=sqrt(R);i++)
        {
            int multiple=2;
            while((i*multiple)<=R)
            {
                // find current multiple
                if(m.find(i*multiple)!=m.end())
                {
                    //Erase as it is a non -prime
                    m.erase(i*multiple);
                }
                //Increment multiple
                multiple++;

            }
        }
    }
}
// function to print  all the prime pair
// in the given range that differs by k
void getprime(int L,int R, int k)
{
    unordered_map<int,int> M;
    //generate all primne number
    findPrimeNOS(L,R,M);
    //Traverse the Map
    for(auto &it:M)
    {
        // if it.first & (it.first+k) is prime then print this pair
        if(M.find(it.first+k)!=M.end())
        {
            cout<<"("<<it.first<<" , "<<it.first+k<<")";
        }
    }
}
int main()
{
    int L=1;
    int R=19;
    int K=6;
    getprime(L,R,K);
    return 0;
}

