// 6. Assign values to the same or different deque container.
#include<iostream>
#include<deque>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    deque<int> dq;
    deque<int> dq2;
    dq.push_back(10);
    dq.push_front(9);
   // dq.assign(2,8);
    dq.insert(dq.end(),11);
    dq.insert(dq.begin(),{1,2,3});
    
    deque<int>::iterator itr;
    for(itr=dq.begin();itr!=dq.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<"\nSecond deque:"<<endl;
    dq2.assign(dq.begin(),dq.end());
    deque<int>::iterator itr1=dq.begin();
    while(itr1!=dq.end())
    {
        cout<<*itr1<<" ";
        itr1++;
    }

    

    
}




// #include <iostream>
// #include <deque>

// int main() {
//     std::deque<int> sourceDeque = {1, 2, 3, 4, 5};
//     std::deque<int> targetDeque;

//     targetDeque.assign(sourceDeque.begin(), sourceDeque.end());

//     // Display the target deque
//     for (int value : targetDeque) {
//         std::cout << value << " ";
//     }

//     return 0;
// }
