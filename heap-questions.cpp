// //1 K’th smallest element in an unsorted array using Priority Queue(Max-Heap):

// #include<bits/stdc++.h>
// using namespace std;

// // function to find the kth smallest arry element
// int kthSmallest(int arr[] , int n, int k)
// {
//     // create a max heap (priotity queue)
//     priority_queue<int> pq;

//     // iteratre through the arry elements
//     for (int i = 0; i <n; i++)
//     {
//         // push the currnt element onto the max heap
//         pq.push(arr[i]);

//         // if the size of the max heap exceeds k, remove the largest element
//         if(pq.size() > k )
//         pq.pop();
//     }

//     // return the kth smallest element (top of the max heap)
//     return pq.top();
    
// }
// int main(){

// int n = 10;
// int arr[n] ={ 10, 5, 4, 3, 48, 6, 2, 33, 53, 10 };
// int k = 4;

// // function calling
// cout<<"kth smallest element is: "<< kthSmallest(arr,n,k);
// return 0;
// }

