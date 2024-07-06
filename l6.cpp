#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n; 
cin >> n;

int i = 0, ans = 0, ans1 = 0 ;

while (n != 0)
{
    int digit = n % 10;
    
    if(digit == 1){
        ans= ans + pow(2,i);
    }

    n = n/10;
    i++;

    int bit = n & 1;

    ans1 = (bit * pow(10, i)) + ans1;

    n = n >> 1;
    i++;
}
cout<< ans << endl;
cout<< ans1 << endl;

return 0;
}