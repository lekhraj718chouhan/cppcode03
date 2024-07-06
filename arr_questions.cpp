// // // //#include<iostream>
// // // #include <bits/stdc++.h>
// // // using namespace std;

// // // void klargest(int arr[], int n, int k )
// // // {
// // //     // sort the given array arr in reverse order.
// // //     sort(arr, arr + n, greater<int>());

// // //     // print the first kth largest elements
// // //     for (int i = 0; i < k; i++)
// // //     {
// // //         cout<< arr[i] << " ";
// // //     }
    
// // // }
// // // int main(){

// // // int arr[] = {1,23,12,9,30,2,50};
// // // int n = sizeof(arr) / sizeof(arr[0]);
// // // int k = 3;
// // // klargest(arr, n , k );
// // // return 0;
// // // }


// // // swapAlternate elements in a array 
// // // #include<iostream>
// // // using namespace std;

// // // void printarr(int arr[], int n)
// // // {
// // //     for (int i = 0; i < n; i++)
// // //     {
// // //         cout<<arr[i]<<" ";
// // //     }
// // //     cout<<endl;
    
// // // }

// // // void swapAlternate(int arr[], int size ){
// // //     int temp =0;
// // //     for (int i = 0; i < size; i+=2)
// // //     {
// // //       if (i+1 < size)
// // //       {
     
// // //         temp= arr[1];
// // //         arr[1] = arr[0];
// // //         arr[0] = temp;
// // //         //  or swap(arr[i], arr[i+1]);
// // //       }
      
// // //     }
    
// // // }

// // // int main(){
// // // int even[8] = {1,2,3,4,5,6,7,8 };
// // // int odd[5] = {9,8,7,6,5};

// // // swapAlternate(even, 8);
// // // printarr(even,8);
// // // swapAlternate(odd, 5);
// // // printarr(odd,5);
// // // return 0;
// // // }

// // // find unique no in an array

// // #include<iostream>
// // using namespace std;

// // void printarr(int arr[], int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
    
// // }

// // int findUnique(int *arr, int size)
// // {
// //     int ans = 0;
// //     for (int i = 0; i < size; i++)
// //     {
// //         ans = ans^arr[i];
// //     }
// //     return ans;
    
// // }
// // int main(){
// // int even[8] = {1,3,3,5,5,7,7 };

// // int ans =  findUnique(even , 8);
// // printarr(even, 8);
// // cout<<"the unique elements is: "<<ans;
// // return 0;
// // }

// // duplicates in an arr

// // #include<iostream>
// // #include<vector> 
// // using namespace std;

// // void printarr(int arr[], int n)
// // {
// //     for (int i = 0; i < n; i++)
// //     {
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
    
// // }

// // int findDuplicate(vector<int> &arr)
// // {
// //     int ans = 0;
// //     for (int i = 0; i < arr.size(); i++)
// //     {
// //         ans = ans^arr[i];
// //     }
     
// //     for (int i = 0; i < arr.size(); i++)
// //     {
// //         ans=ans^i;
// //     }
      
// //     return ans;
    
// // }
// // int main(){
// // int even[6] = {5,1,2,3,2,4};
// // vector<int> evenVector(even, even + 6);

// // int ans =  findDuplicate(evenVector);
// // printarr(even, 6);
// // cout<<"the duplicate elements is: "<<ans;
// // return 0;
// // }


// // intersection in an arr

// // #include<iostream>
// // #include<vector> 
// // using namespace std;

// // vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// //    {
// //     int i = 0,  j =0;
// //     vector<int> ans;
// //     while (i<n && j<m)
// //     {
// //         if (arr1[i]==arr2[j])
// //         {
// //             ans.push_back(arr1[i]);
// //             i++;
// //             j++;
// //         }
// //         else if (arr1[i] < arr2[j])
// //         {
// //             i++;
// //         }
// //         else
// //         {
// //             j++;
// //         } 
// //     }
// //     return ans;
    
// // }
// // void printVector(const vector<int> &vec)
// // {
// //     for (int i = 0; i < vec.size(); i++)
// //     {
// //         cout << vec[i] << " ";
// //     }
// //     cout << endl;
// // }
// // int main(){
// // int even[6] = {1,2,3,4,5,6};
// // int odd[3] = {6,7,8};
// // vector<int> evenVector(even, even + 6);
// // vector<int> oddVector(odd, odd + 3);

// // vector<int> ans =  findArrayIntersection(evenVector, 6 , oddVector,3);

// // cout<<"the findarryintersection elements is: ";
// // printVector(ans);
// // return 0;
// // }

// // pair sum 

// #include<iostream>
// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;

// vector<vector<int>> pairsum(vector<int> &arr, int s){
//     vector < vector<int> > ans;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i+1; j < arr.size(); j++)
//         {
//             if(arr[i] +arr[j] == s){
//                 vector<int> temp;
//                 temp.push_back(min(arr[i], arr[j]));
//                 temp.push_back(max(arr[i], arr[j]));
//                 ans.push_back(temp);
//             }
//         }
        
//     }
//     sort(ans.begin(), ans.end());
//    return ans; 
// }

// void printVectorOfVectors(const vector<vector<int>> &vec) {
//     for (int i = 0; i < vec.size(); i++) {
//         for (int j = 0; j < vec[i].size(); j++) {
//             cout << vec[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// int main(){
// int myarr[7]= {1,2,3,4,5,6,7};
// vector<int> myarrVector(myarr, myarr + 7);
// vector<vector<int>> ans = pairsum (myarrVector, 7);
// cout<<"the  pairsum is: 7 "<<endl;
// printVectorOfVectors(ans);
// return 0;
// // }

// removeOccurence

#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        // Continue removing part from s until it's no longer found in s
        while (s.length() != 0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main() {
    Solution solution;
    string s = "daabcbaabcbc";
    string part = "abc";
    string result = solution.removeOccurrences(s, part);
    cout << "Result: " << result << endl;  // Expected output: "dab"
    return 0;
}



 