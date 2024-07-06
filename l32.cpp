// // // code for sourse and destination place

// // // #include<iostream>

// // // using namespace std;


// // // void reachHome(int src, int dest){
// // //     cout<< "sourse " << src << " destination " << dest << endl;
// // //     // base case
// // //     if (src == dest)
// // //     {
// // //         cout << "pahuch gya" << endl;
// // //         return;
// // //     }
// // //     // processing - ek step aage badhjao
// // //     src++;

// // //     // recursive call
// // //     reachHome(src, dest);
    
// // // }
// // // int main(){
// // // int dest = 10;
// // // int src = 1;

// // // cout<< endl;
// // // reachHome (src, dest);
// // // return 0;
// // // }

// // // code for fibonacci number
// // #include<iostream>
// // using namespace std;

// // int fib(int n)
// // {
// //     // base case
// //     if (n==0)
// //         return 0;
       
// //     if(n==1)
// //       return 1;

// //       // recursion code
// //       int ans = fib(n-1) + fib(n-2);
// //       return ans;
// // }

// // int main(){

// // int n;
// // cout<<"enter a number"<<endl;
// // cin>> n;
// // int ans = fib(n);
// // cout<< fib;

// // return 0;
// // }

// // code for 0 th to n th stairs 

// #include<iostream>
// using namespace std;

// int coutDistinctWayToClimStair(long long nstairs){
//     // base case

//     if(nstairs < 0 )
//     return 0;

//     if (nstairs == 0)
//     return 1;

//     // r.c
//     int ans = coutDistinctWayToClimStair(nstairs - 1) + coutDistinctWayToClimStair (nstairs-2);
//     return ans;
// }
// int main(){
// int nstairs;
// cout<< " enter the number of stairs : ";
// cin >> nstairs;

// int ways = coutDistinctWayToClimStair(nstairs);
// cout<< "number of ways to reach the nstairs : "<< nstairs<<" ways : " << ways <<" "<< endl;
// return 0;
// }

// code for number to string form

#include<iostream> 
using namespace std;

void sayDigit(int n, string arr[]) {

    //base case
    if(n == 0)
        return ;

    //processing 
    int digit = n % 10;
    n = n / 10;
    

    //recursive call
    sayDigit(n, arr);

    cout << arr[digit] << " ";

}

int main() {

    string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
    int n;
    cin >> n;

    cout << endl << endl << endl ;
    sayDigit(n, arr);
    cout << endl << endl << endl ;


    return 0;
}