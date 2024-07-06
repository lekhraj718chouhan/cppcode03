#include<iostream>
#include<string>
#include<vector>
using namespace std;

class solution {
    public:
          void reverseString(vector<char>& s) {
            int st=0;
            int e = s.size()-1;

            while(st<e){
                swap(s[st++], s[e--]);
            }
          }  
};
