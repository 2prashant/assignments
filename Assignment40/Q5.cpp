//5. Returns the maximum number of elements that a deque container can hold.
#include<iostream>
#include<iterator>
#include<deque>
#include<vector>
#include<Array>
using namespace std;
int maxvalue(deque<int> dq)
{
   return dq.max_size()
   

    
}
int main()
{
    deque<int> dq;
    int size,value;
    cout<<"size: ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>value;
        dq.push_back(value);
    }
    cout<<"Max element "<<maxvalue(dq);
}




// #include <iostream>
// #include <deque>

// int main() {
//     std::deque<int> myDeque;
    
//     // Output the maximum number of elements the deque can hold
//     std::cout << "Maximum elements for a deque: " << myDeque.max_size() << std::endl;

//     return 0;
// }
