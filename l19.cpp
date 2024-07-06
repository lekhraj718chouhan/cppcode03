// array program

// #include<iostream>
// #include<array>
// using namespace std;


// int main(){

// int basic[3] = {1,2,3};
// array<int,4> a = {1,2,3,4};

// int size = a.size();

// for (int i = 0; i < size; i++)
// {
//     cout<<a[i]<<endl;
// }

// cout<<"element at 2nd index-> "<<a.at(2)<<endl;
// cout<<"empty or not-> "<<a.empty()<<endl;
// cout<<"first element -> "<<a.front()<<endl;
// cout<<"last element-> "<<a.back()<<endl;
// return 0;
// }

//vector program

// #include<iostream>
// #include<vector>
// using namespace std;


// int main(){
// vector<int> v;

// vector<int> a(5,1);

// vector<int> last(a);
// cout<<"print last"<<endl;
// for (int i: last )
// {
//     cout<<i<<" ";
// }cout<<endl;

// cout<<"capacity-> "<<v.capacity()<<endl;

// v.push_back(1);
// cout<<"capacity-> "<<v.capacity()<<endl;

// v.push_back(2);
// cout<<"capacity-> "<<v.capacity()<<endl;

// v.push_back(3);
// cout<<"capacity-> "<<v.capacity()<<endl;
// //cout<<"size->"<<v.size<<endl;

// cout<<"elements at 2nd index"<< v.at(2)<<endl;

// cout<<"first element -> "<<v.front()<<endl;
// cout<<"last element-> "<<v.back()<<endl;

// cout<<"before pop"<<endl;
// for(int i:v) {
//     cout<<i<<" ";
// }cout<<endl;

// v.pop_back();
// cout<<"after pop"<<endl;
// for(int i:v) {
//     cout<<i<<" ";
// }cout<<endl;
// return 0;
// }

//deque program

// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){

// deque<int> d;

// d.push_back(1);
// d.push_back(2);

// cout<<endl;

// cout<<"print first index element"<<d.at(1)<<endl;

// cout<<"first element -> "<<d.front()<<endl;
// cout<<"last element-> "<<d.back()<<endl;

// cout<<"empty or not-> "<<d.empty()<<endl;

// cout<<"before erase"<<d.empty()<<endl;
// d.erase(d.begin(),d.begin()+1);
// cout<<"after erase"<<d.size()<<endl;
// for(int i:d)
// cout<<i<<endl;
// return 0;
// }

// list

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
// list<int> l;

// list<int> l;
//  list<int> n(5,100);
//  cout<<"printing n"<<endl;
//  for(int i:n) {
//     cout<<i<<" ";
//  }cout<<endl;

//  l.push_back(1);
//   l.push_back(2);

//   for(int i:l) {
//      cout<<i<<" ";
//  }cout<<endl;
  
//   l.erase(l.begin());
//   cout<<"after erase"<<endl;
//   for(int i:l)
//   { cout<<i<<" ";
//  }cout<<endl;

// //cout<<"size of list"<<l.size()<<end;
// return 0;
// }

// set

#include<iostream>
#include<set>
using namespace std;

int main(){

set<int> s;
s.insert(5);
s.insert(5);
s.insert(1);
s.insert(6);
s.insert(6);
s.insert(6);
s.insert(0);
s.insert(0);

for(auto i : s){
   cout<<i<<endl;
}cout<<endl;

set<int>::iterator it = s.begin();
it++;

s.erase(it);
for(auto i : s){
   cout<<i<<endl;
}cout<<endl;

cout<<"-5 is preset or not-> " <<s.count(-5)<<endl;

set<int>::iterator itr = s.find(5);
for(auto it= itr; it!=s.end();it++){
   cout<<*it<<" ";
}cout<<endl;


return 0;
}