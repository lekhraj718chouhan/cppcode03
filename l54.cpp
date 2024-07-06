#include<iostream>
using namespace std;
#include<stack>

class Stack {

    ///properties
    public:
        int *arr;
        int top;
        int size;

        // behaviour
        Stack(int size) {
            this -> size = size;
            arr = new int[size];
            top = -1;
        }

        void push(int element) {
            if(size - top >1) {
                top++;
                arr[top] = element;
            }
            else{
                cout <<"stack overflow " << endl;
            }
        }

        void pop() {
            if(top >=0) {
              top--;
            }
            else
            {
                cout<< "stack underflow" << endl;
            }
         }

         int peek() {
            if(top >=0 && top < size)
            return arr[top];
            else
            {
                cout<<"stack is empty";
                return -1;
            }
         }

         bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
         }
};

 int main(){

    Stack st(5);

    st.push(55);
    st.push(66);
    st.push(77);

    cout<<st.peek() << endl;
    st.pop();

// //creation of stack

// stack<int> s;

// //push operation
// s.push(2);
// s.push(9);

// // pop
// s.pop();

// cout<<"printing top element " << s.top() << endl;

// if(s.empty()) {
//     cout <<" stack is empty "<<endl;

// }
// else{
//         cout <<" stack is not empty "<<endl;

// }

// cout <<" size of stack is "<< s.size() << endl;
return 0;
}