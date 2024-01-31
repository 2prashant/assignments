// 10. Given an array, print the Next Greater Element (NGE) for every element using stack.
// Example:
// Input: arr[] = [ 4 , 5 , 2 , 25 ] // NOT Solve
// Output: 4 –> 5
// 5 –> 25
// 2 –> 25
// 25 –> -1

// #include<iostream>
// #include<stack>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     stack<int> s;
//     vector<int> v;
//     s.push(4);
//     s.push(5);
//     s.push(2);
//     s.push(1);
//     s.push(25);
//     while(!s.empty())
//     {
//         v.push_back(s.top());
//         s.pop();
//     }
//      while(!v.empty())
//      {
//         s.push(v.back());
//         v.pop_back();
//      }


    
// }



#include <iostream>
#include <stack>
#include <vector>

using namespace std;

void printNextGreaterElements(const vector<int>& arr) {
    stack<int> s;
    s.push(arr[0]); // Push the first element onto the stack
    int n = arr.size();

    // Traverse the rest of the elements
    for (int i = 1; i < n; i++) {
        int next = arr[i];

        // If the stack is not empty, and the current element is greater
        // than the top of the stack, print the NGE for the top element
        while (!s.empty() && next > s.top()) {
            cout << s.top() << " -> " << next << endl;
            s.pop();
        }

        // Push the current element onto the stack
        s.push(next);
    }

    // For the remaining elements in the stack, there is no NGE
    while (!s.empty()) {
        cout << s.top() << " -> -1" << endl;
        s.pop();
    }
}

int main() {
    vector<int> arr = {4, 5, 2, 25};
    cout << "Next Greater Elements:" << endl;
    printNextGreaterElements(arr);
    
    return 0;
}
