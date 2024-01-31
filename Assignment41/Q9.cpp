//9. Create back button functionality using stack.
// #include<iostream>
// #include<stack>
// #include<algorithm>
// #include<string>
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     stack<string> s1;
//     string  current_page="Home";
//     while(true)
//     {
//        cout<<"Current Page: "<<current_page<<endl;
//         cout<<"1. Go to a new page"<<endl;
//         cout<<"2. Go back"<<endl;
//         cout<<"3. Exit"<<endl;
//         int choice;
//         cin>>choice;
//         switch(choice)
//        {
//           case 1:         {
//                            string name;
//                            cout<<"Enter the new page name: ";
//                           // getline(cin,name);
//                            cin>>name;
//                            s1.push(name);
//                            current_page=name;
//                            break;
//                           }
//          case 2:
//                   {
//                       while(!s1.empty())
//                       {
//                             cout<<s1.top()<<endl;
//                             s1.pop();
//                             break;
//                       }
//                       break;
//                   }
//          case 3:
//                 {
//                     exit(0);
//                 }
//          default:
//                 {
//                     cout<<"Invalid choice"<<endl;
//                 }
//        }
//     }

// }

#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main()
{
    stack<string> pagestack;
    string current_page="Home";
    while(true)
    {
        //display the current page.
        cout<<"Current page :"<<current_page<<endl;
        cout<<"1. Go to a new Page"<<endl;
        cout<<"2. Go back"<<endl;
        cout<<"3. Exit"<<endl;
        int choice;
        cin>>choice;
        if(choice==1)
        {
            string newpage;
            cout<<"Enter the new Page name :";
             cin>>newpage;
            // push the current page onto the stack and go to the new page.
            pagestack.push(newpage);
            current_page=newpage;
        }
        else if(choice==2 && !pagestack.empty())
        {
            //Go to the previous page.
            current_page=pagestack.top();
            pagestack.pop();
        }
        else if(choice==3)
        {
            break;
        }
        else
        {
            cout<<"Invalid choice .please try again"<<endl;
        }
    }
    return 0;
}

