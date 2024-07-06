#include<iostream>
using namespace std;

int main(){
// int num = 5;
// cout<<"num's  address "<< &num<<endl;; 

// int *ptr = &num;
// cout<<"value is : "<<*ptr <<endl;
// cout<<"address is : "<<ptr <<endl;

// cout<<" size of interger is " << sizeof(num) << endl;
// cout<<" size of pointer is " << sizeof(ptr) << endl;

// int i = 5;
// int *q = &i;
// cout << q << endl;
// cout << *q << endl;

// int *p = 0;
// p = &i;
// cout << p << endl;
// cout << *p << endl;


int num = 5;
int a = num;
cout<<" a before "<< num <<endl;
a++;
cout<<" a after "<< num <<endl;

int *p = &num;
cout<<" before "<< num <<endl;
(*p)++;
cout<<" after "<< num <<endl;

// copining a pointer
int *q = p;
cout<< p << " - " << q <<endl;
cout<< *q << " - " << *p <<endl;

int i = 3;
int *t = &i;
//cout<< (*t)++ << endl;
*t = *t +1;
cout<< *t << endl;
cout<<" before t "<< t <<endl;
t = t +1;
cout<<" after t "<< t <<endl;


return 0;
}
