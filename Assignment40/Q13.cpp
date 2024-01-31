//deque


//13. Segregate even and odd nodes in a Linked List using Deque.
// #include<iostream>
// #include<iterator>
// #include<list>
// #include<deque>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     list<int> l1;
//     l1.push_back(10);
//     l1.push_front(5);
//     l1.push_front(7);
//     l1.push_front(20);
//     l1.insert(l1.begin(),{1,2,3,4});
//     list<int>::iterator itr;
//     for(itr=l1.begin();itr!=l1.end();itr++)
//     {
//         cout<<*itr<<" ";
//     }
//     deque<int> dq;
//     deque<int> dq2;
//      for(itr=l1.begin();itr!=l1.end();itr++)
//     {
//          if(*itr%2==0)
//          {
//             dq.push_back(*itr);
//          }
//          else
//          {
//             dq2.push_back(*itr);
//          }
//     }
//     cout<<"\nEven Number:"<<endl;
//     for(auto itr1:dq)
//     {
//         cout<<itr1<<" ";
//     }
//     cout<<"\nOdd Number:"<<endl;
//     for(auto itr2:dq2)
//     {
//         cout<<itr2<<" ";
//     }
   
// }



#include <iostream>
#include <deque>

using namespace std;

// Define the structure of a linked list node
struct Node {
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

// Function to insert a node at the end of the linked list
void insert(Node*& head, int data) {
    Node* newNode = new Node(data);
    if (!head) {
        head = newNode;
        return;
    }
    Node* current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to segregate even and odd nodes using a deque
void segregateEvenOdd(Node*& head) {
    if (!head || !head->next) {
        return;
    }

    deque<int> evenNodes;
    deque<int> oddNodes;

    Node* current = head;

    while (current) {
        if (current->data % 2 == 0) {
            evenNodes.push_back(current->data);
        } else {
            oddNodes.push_back(current->data);
        }
        current = current->next;
    }

    current = head;

    while (!evenNodes.empty() || !oddNodes.empty()) {
        if (!evenNodes.empty()) {
            current->data = evenNodes.front();
            evenNodes.pop_front();
        } else {
            current->data = oddNodes.front();
            oddNodes.pop_front();
        }
        current = current->next;
    }
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* head = nullptr;
    
    insert(head, 1);
    insert(head, 2);
    insert(head, 3);
    insert(head, 4);
    insert(head, 5);

    cout << "Original Linked List: ";
    printList(head);

    segregateEvenOdd(head);

    cout << "Linked List after segregating even and odd nodes: ";
    printList(head);

    return 0;
}
