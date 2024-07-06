// // #include<iostream>
// // using namespace std;

// // int fastExpo(int a,int b){
// //     int res = 1;
// //     while(b > 0){

// //         if (b&1)
// //         {
// //             res = res*a;
// //         }
// //         b = b >> 1;
// //         a = a*a;
// //     }
// //     return res;
// // }
// // int main(){

// // int a,b;

// // cout <<"enter the value of a and b" <<endl;
// // cin >> a >> b;

// // cout << "answer is: " << fastExpo(a,b) << endl;
// // return 0;
// // }

// #include<iostream>
// using namespace std;

// int gcd(int a, int b){
//     if(a==0)
//     return  b;

//      if(b==0)
//     return  a;

//     while (a != b){}
//     {
//          if (a>b)
//          {
//            a = a-b;
//          }
//          else
//          {
//             b = b-a;
//          }
//     }
//     return a;

// }
// int main(){
// int a,b;
// cout <<"enter the value of a and b" <<endl;
// cin >> a>> b;

// int ans = gcd(a,b);

// cout << "the gcd of"<< a << " & " << b << " is: " << ans << endl;
// return 0;
// }

#include<iostream>
using namespace std;

bool checkPalindrome(char a[], int n ){
  int s =0;
  int e = n-1;

  while (s<=e)
     if (a[s] != a[e])
     {
      return 0;
     }
     else
     {
      s++;
      e--;
     }
     return 1;
 
}
int main(){

//cout<< "palindrome or not"<< checkPalindrome(name, len) << endl;
return 0;
}