// reverse a arr using stack

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//    string str = "lekhraj";

//    stack<char> s;
//    for (int  i = 0; i < str.length(); i++)
//    {
//     char ch = str[i];
//     s.push(ch);
//    }

//    string ans = " ";
 
//  while (!s.empty())
//  {
//     char ch = s.top();
//     ans.push_back(ch);

//     s.pop();
//  }
 
//  cout<< "answer is: "<< ans << endl;

// return 0;
// }

// delete middle element from stack

// #include <iostream>
// #include <stack>
// using namespace std;

// void solve(stack<int>& inputStack, int count, int size) {
//     // base case
//     if(count == size / 2) {
//         inputStack.pop();
//         return;
//     }
    
//     int num = inputStack.top();
//     inputStack.pop();

//     // recursive call
//     solve(inputStack, count + 1, size);

//     // push the element back after the recursive call
//     inputStack.push(num);
// }

// void deleteMiddle(stack<int>& inputStack, int N) {
//     int count = 0;
//     solve(inputStack, count, N);
// }

// // Function to print the stack
// void printStack(stack<int> s) {
//     stack<int> tempStack;
//     while (!s.empty()) {
//         tempStack.push(s.top());
//         s.pop();
//     }
//     while (!tempStack.empty()) {
//         cout << tempStack.top() << " ";
//         tempStack.pop();
//     }
//     cout << endl;
// }

// int main() {
//     stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);

//     cout << "Stack before deleting middle element: ";
//     printStack(s);

//     // Call deleteMiddle function
//     deleteMiddle(s, s.size());

//     cout << "Stack after deleting middle element: ";
//     printStack(s);

//     return 0;
// }

// insert element at bootom of stack

// #include<iostream>
// #include<stack>
// using namespace std;

// void solve(stack<int> & s, int x) {
//     // base case
//     if (s.empty())
//     {
//         s.push(x);
//         return;
//     }

//     int num = s.top();
//     s.pop();

//     // recursive call
//     solve(s, x);
//     s.push(num); 
// }

// stack<int> pushAtBottom(stack<int>& myStack, int x)
// {
//     solve(myStack, x);
//     return myStack;
// }

// // function to print the stack
// void printStack(stack<int> s) {
//     stack<int> stk;
//     while (!s.empty())
//     {
//         stk.push(s.top());
//         s.pop();
//     }
//     while (!stk.empty())
//     {
//         cout<< stk.top() << " ";
//         stk.pop();
//     }
//     cout<<endl;
// } 

// int main(){
// stack<int> s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);

//     cout << "Stack before pushing element at bottom: ";
//     printStack(s);

//     int x = 7;
//     s = pushAtBottom(s,x);
//       cout << "Stack after pushing element at bottom: ";
//     printStack(s);
// return 0;
// }

// Flatten a Binary tree to Linked List 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
public:
    void flatten(Node* root) {
        Node* curr = root;
        while (curr != NULL) {
            if (curr->left) {
                Node* pred = curr->left;
                while (pred->right) {
                    pred = pred->right;
                }
                pred->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
    }
};

void printFlattenedTree(Node* root) {
    Node* curr = root;
    while (curr != NULL) {
        cout << curr->data << " ";
        curr = curr->right;
    }
    cout << endl;
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);

    Solution solution;
    solution.flatten(root);

    printFlattenedTree(root);  // Output the flattened tree

    // Cleanup the tree
    Node* curr = root;
    while (curr != NULL) {
        Node* next = curr->right;
        delete curr;
        curr = next;
    }

    return 0;
}
