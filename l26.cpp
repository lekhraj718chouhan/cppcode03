#include<iostream>
using namespace std;

// int main(){
//int arr[10] = {23,122,41,67};

// cout<< " address of first memory block is " << arr << endl;
// cout << arr [0] <<endl;
// cout<< " address of first memory block is " << &arr[0] << endl;

// cout << " 4th " << *arr << endl;
// cout << " 5th " <<*arr +1 << endl;
//  cout << " 6th " <<*(arr +1) << endl;
// cout << " 7th " <<*(arr +1) << endl;

// int temp[10] ={1,2 };

// cout<<sizeof(temp)<<endl;
// cout<<"1st "<<sizeof(*temp)<<endl;
// cout<<"2nd "<<sizeof(&temp)<<endl;

// int *ptr = &temp[0];
// cout<<sizeof(ptr)<<endl;
// cout<<sizeof(*ptr)<<endl;
// cout<<sizeof(&ptr)<<endl;


// int a[20]= {1,2,3,4};
// cout << " ->" << &a[0]<<endl;;

// int *p = &a[0];
// cout << " ->" << &p<<endl;;

// int arr[10];

// // error
// // arr = arr +1;

// int  *ptr = &arr[0];
// cout<< ptr<< endl;
// ptr = ptr +1;

// int arr[5] = {1,2,3,4,5};
// char ch[6] = "abcde";

// cout << ch << endl;
// cout << arr << endl;

// char *c = &ch[0];
// cout << c << endl;

// char temp = 'z';
// char *p = &temp;

// cout << p << endl;



// void print(int *p) {
//     cout << *p << endl;
//       *p = *p +1;
// }

// void update(int *p){
//     *p = *p +1;
//     //p = p +1;

// }
// int main(){

// int value = 5;
// int *p = &value;

// cout<<" before " << *p << endl;
// update(p);
// cout<<" after " << *p << endl;


int getSum(int *arr, int n) {
    cout << endl << "size : " << sizeof(arr) << endl;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}
 int main(){
 
 int arr[6] = {1,2,3,4,5,8};

 cout<<"sum is : " << getSum(arr+3,3) <<endl;
return 0;
}