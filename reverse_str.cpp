#include<iostream>
using namespace std;

// function to reverse a str
void reverse(string str){
    for (int i = str.length() - 1; i >=0; i--)
    {
        cout<<str[i];
    }
    
}
int main(){
string s ="lekhraj";
reverse(s);
return 0;
}