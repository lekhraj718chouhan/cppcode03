#include<iostream>
using namespace std;

int main(){

int a = 0;
int b = 1;

cout<< " a&b " << (a&b) << endl;
cout<< " a|b " << (a|b) << endl;
cout<< " ~a " << (~a) << endl;
cout<< " a^b " << (a^b) << endl;


cout<<(17>>1)<<endl;
cout<<(21<<2)<<endl;

int i = 7;

cout<< (++i)<<endl;
cout<< (i++)<<endl;
cout<< (i--)<<endl;
cout<< (--i)<<endl;

cout<< ""<<endl;
int n = 10;

cout<<a << " " << b<< " "<<endl;
for (int i = 1; i  <=n; i++)
{
    int nextNumber = a+b;
    cout<<nextNumber<<" ";

    a = b;
    b = nextNumber;
}
cout<<"  " <<endl;
cout<<"continue "<<endl;

for(int l=0; l<5; l++){
   

   cout<<" hi " <<endl;
   cout<<" hey " <<endl;
   continue;

   cout<<" reply toh karde " <<endl;
}


return 0;
}