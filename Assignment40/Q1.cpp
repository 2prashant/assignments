// deque

// 1. Inserts an element. And returns an iterator that points to the first of the newly inserted
// elements.

#include<iostream>
#include<deque>
#include<iterator>
using namespace std;
deque<int> addelement(deque<int> dq,int n)
{
    int value;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        dq.push_back(value);
    }
    return dq;
}
int main()
{
    deque<int> dq;
    int size;
    cout<<"Size:";
    cin>>size;
    auto dq1=addelement(dq,size);
    for(auto itr:dq1)
    {
        cout<<itr<<" ";
    }
    cout<<endl;
    deque<int> dq3={1,2,3,4,5};
    deque<int> dq2;
    deque<int>::iterator itr99;
    itr99++;
    dq3.insert(itr99,11);
    for(auto itr2:dq2)
    {
        cout<<itr2<<" ";
    }
}
// #include<iostream>
// #include<iterator>
// #include<deque>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     deque<int> dq;
//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_front(9);
//     dq.push_front(8);
//     auto itr=display(dq);
//    // deque<int>::iterator itr;
//     for(itr=dq.begin();itr!=dq.end();itr++)
//     {
//         cout<<*itr<<" ";
//     }

    
   

//     return 0;
// }








// #include <deque>
// #include <iostream>
 
// using namespace std;
 
// void showdq(deque<int> g)
// {
//     deque<int>::iterator it;
//     for (it = g.begin(); it != g.end(); ++it)
//         cout << '\t' << *it;
//     cout << '\n';
// }
 
// int main()
// {
//     deque<int> gquiz;
//     gquiz.push_back(10);
//     gquiz.push_front(20);
//     gquiz.push_back(30);
//     gquiz.push_front(15);
//     cout << "The deque gquiz is : ";
//     showdq(gquiz);
 
//     cout << "\ngquiz.size() : " << gquiz.size();
//     cout << "\ngquiz.max_size() : " << gquiz.max_size();
 
//     cout << "\ngquiz.at(2) : " << gquiz.at(2);
//     cout << "\ngquiz.front() : " << gquiz.front();
//     cout << "\ngquiz.back() : " << gquiz.back();
 
//     cout << "\ngquiz.pop_front() : ";
//     gquiz.pop_front();
//     showdq(gquiz);
 
//     cout << "\ngquiz.pop_back() : ";
//     gquiz.pop_back();
//     showdq(gquiz);
 
//     return 0;
// }



// #include <bits/stdc++.h> 
// using namespace std; 
 
// int main() 
// { 
//  deque<int> dq = { 1, 2, 3, 4, 5 }; 
 
//  deque<int>::iterator it = dq.begin(); 
//  it=it+4; 
 
//  it = dq.insert(it, 10); // 1 10 2 3 4 5 
 
//  std::cout << "Deque contains:"; 
//  for (it = dq.begin(); it != dq.end(); ++it) 
//   cout << ' ' << *it; 
//  cout << '\n'; 
 
//  return 0; 
// } 

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     deque<int> qu;
//     qu.push_back(90);
//     qu.push_back(100);
//     qu.push_front(80);
//     qu.push_front(70);
//     deque<int>::iterator it=qu.begin();
//     it=it+2;
//     qu.insert(it,300);
//     it++;
//     qu.insert(it,5,8);
//     for(it=qu.begin();it!=qu.end();it++)
//     {
//         cout<<*it<<" ";
//     }
// }


// #include<bits/stdc++.h>
// #include<deque>
// using namespace std;
// int main()
// {
//     deque<int> qu;
//     qu.push_front(77);
//     qu.push_back(10);
//     qu.push_back(20);
//     qu.push_front(9);
//     qu.push_front(8);
//     cout<<"Size: "<<qu.size()<<endl;

//      if(qu.empty()==true)
//      {
//          cout<<"deque is empty"<<endl;
//      }
//      else
//      {
//         cout<<"deque is not empty"<<endl;;
//      }
//     // deque<int>::iterator itr=qu.begin();
//     // itr=itr+2;
//     // vector<int> v={11,22,33,44,55};
//     // qu.insert(itr,v.begin(),v.end());
//     // for(itr=qu.begin();itr!=qu.end();itr++)
//     // {
//     //     cout<<*itr<<" ";
//     // }


// }