// // // #include<iostream>
// // // #include<stack>
// // // using namespace std;

// // // int main(){

// // // string str = "chouhan";

// // // stack<char> s;
// // // for (int i = 0; i <str.length(); i++)
// // // {
// // //     char ch = str[i];
// // //     s.push(ch);
// // // }

// // // string ans ="";
// // // while (!s.empty())
// // // {
// // //     char ch = s.top();
// // //     ans.push_back(ch);

// // //     s.pop();
// // // }

// // // cout<< "answe is :" << ans << endl;
// // // return 0;
// // // // }

// // #include <iostream>
// // using namespace std;
// // #include <stack>

// // void deleteMiddleElement(stack<int> &s, int n, int current = 0)
// // {
// //     // base case

// //     if (s.empty() || current == n / 2)
// //     {
// //         if (!s.empty())
// //         {
// //             s.pop();
// //         }
// //         return;
// //     }

// //     // remove top element and store it temporarily
// //     int temp = s.top();
// //     s.pop();
// //     // rc

// //     deleteMiddleElement(s, n, current + 1);

// //     // push the top element back  onto  the  stack
// //     s.push(temp);
// // }

// // // function to print the elements of a stack
// // void printStack(stack<int> s)
// // {
// //     while (!s.empty())
// //     {
// //         cout << s.top() << " ";
// //         s.pop();
// //     }
// //     cout << endl;
// // }
// // int main()
// // {
// //     stack<int> s;

// //     // push elements onto the stack
// //     s.push(1);
// //     s.push(2);
// //     s.push(3);
// //     s.push(4);
// //     s.push(5);
// //     cout<<"original stack : ";
// //     printStack(s);

// //     // get the size of the stack
// //     int n = s.size();

// //     // delete the middle elemnt 
// //     deleteMiddleElement(s, n);

// //     cout << "stack after deleting middle element : ";
// //     printStack(s);
// //     return 0;
// // }

// #include <iostream>
// #include <stack>
// using namespace std;

// // Function to insert an element at the bottom of a stack
// void insertAtBottom(stack<int> &s, int x) {
//     // Base case: if the stack is empty, push the element
//     if (s.empty()) {
//         s.push(x);
//         return;
//     }

//     // Remove top element and store it temporarily
//     int temp = s.top();
//     s.pop();

//     // Recursive call to insert at bottom
//     insertAtBottom(s, x);

//     // Push the top element back onto the stack
//     s.push(temp);
// }

// // Function to reverse a stack using recursion
// void reverseStack(stack<int> &s) {
//     // Base case: if the stack is empty or has only one element, no need to reverse
//     if (s.empty() || s.size() == 1) {
//         return;
//     }

//     // Remove top element and store it temporarily
//     int temp = s.top();
//     s.pop();

//     // Recursive call to reverse remaining stack elements
//     reverseStack(s);

//     // Insert the top element at the bottom of the reversed stack
//     insertAtBottom(s, temp);
// }

// // Function to print the elements of a stack
// void printStack(stack<int> s) {
//     while (!s.empty()) {
//         cout << s.top() << " ";
//         s.pop();
//     }
//     cout << endl;
// }

// int main() {
//     stack<int> s;

//     // Push elements onto the stack
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//     s.push(5);

//     cout << "Original stack: ";
//     printStack(s);

//     // Reverse the stack
//     reverseStack(s);

//     cout << "Reversed stack: ";
//     printStack(s);

//     return 0;
// }


#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element into a sorted stack
void insert(stack<int>& s, int val) {
    // Base case: if the stack is empty or the top element is smaller than val, push val
    if (s.empty() || s.top() < val) {
        s.push(val);
        return;
    }

    // Otherwise, pop the top element and recursively insert val
    int temp = s.top();
    s.pop();
    insert(s, val);

    // Push the popped element back onto the stack
    s.push(temp);
}

// Function to sort a stack using recursion
void sortStack(stack<int>& s) {
    // Base case: if the stack is empty, return
    if (s.empty()) {
        return;
    }

    // Otherwise, pop the top element and recursively sort the remaining elements
    int temp = s.top();
    s.pop();
    sortStack(s);

    // Insert the popped element into the sorted stack
    insert(s, temp);
}

// Function to print the elements of a stack
void printStack(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> s;

    // Push elements onto the stack
    s.push(5);
    s.push(2);
    s.push(9);
    s.push(1);
    s.push(7);

    cout << "Original stack: ";
    printStack(s);

    // Sort the stack
    sortStack(s);

    cout << "Sorted stack: ";
    printStack(s);

    return 0;
}
