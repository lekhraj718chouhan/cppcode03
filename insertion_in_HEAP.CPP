// #include<iostream>
// #include <vector>

// using namespace std;

// class MaxHeap{
// private:
//    vector<int> heap;

//    void bubbleUp(int index){
//     while (index > 0){
//         int parentIndex = (index - 1) / 2;
//         if (heap[index] <= heap[parentIndex]) {
//             break; 
//             //if the element is in the right position,stop.
//         }
//         // swap the elements.
//         // else
//         // {
//             /* code */
//         swap(heap[index], heap[parentIndex]);
//         // move to the parent index.
//         index = parentIndex;
//        // }
        
//     }
//    }
// public: 
//      void insert(int value) {
//         // add the new element at the end of the heap.
//         heap.push_back(value);
//         // bubble up the new element to its correct position.
//         bubbleUp(heap.size() - 1);
//      }     
//      void printHeap() {
//         for(int val : heap){
//             cout << val << " ";
//         }
//         cout<<endl;
//      }
// };
// int main(){
// MaxHeap maxHeap;
// maxHeap.insert(10);
// maxHeap.insert(20);
// maxHeap.insert(5);
// maxHeap.insert(30);
// maxHeap.insert(15);

// maxHeap.printHeap();
// // should print : 30 20 5 10 15
// return 0;
// }

#include<iostream>
#include<queue>
using namespace std;

class heap
{
    public: 
    int arr[100];
    int size ;
    heap() {
        arr[0] = -1;
        size = 0;
    }
    void insert (int val){
        size = size +1;
        int index = size;
        arr[index] = val;

        while (index > 1)
        {
          int parent = index/2;

          if (arr[parent] < arr[index])     
          {
            swap(arr[parent], arr[index]);
            index = parent;
          }
          else{
            return;
          }
       }
    }
    void print() { 
        for (int i = 1; i <= size; i++)
        {
            cout<< arr[i] << " ";
        } cout << endl;
        
    }

    void deletefromheap(){
        if (size == 0)
        {
            cout<< " nothing to delete "<< endl;
            return;
        }
        // step 1: put last element into first index
        arr[1] = arr[size];
        // step2: remove last element 
        size--;

        // step3: take root node to its corect position 
        int i = 1;
        while (i< size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }
            else if(rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }
            else
            {
                return;
            }
        }
        
        
    }
};

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    if (left <= n && arr[largest] < arr[left])
    {
       largest = left;
    }
    
    if (right <= n && arr[largest] < arr[right])
    {
       largest = right;
    }
    
}

void heapSort(int arr[], int n) {
    int size = n;
    while(size > 1 ){
        // step 1:  swap
        swap(arr[size], arr[1]);
        size--;
        
        //step2:
        heapify(arr, size , 1);
    }
}

int main(){
heap h;
h.insert(50);
h.insert(55);
h.insert(53);
h.insert(52);
h.insert(54);
h.print();

cout << "printing the heap after deleting the root node " << endl;

h.deletefromheap();
h.print();

int arr[6]={-1,54,53,55,52,50};
int n = 5;
for (int i = n/2; i > 0; i--)
{
    heapify(arr, n , i);
}
cout << "printing the array now " << endl;
for(int i = 1; i< n ; i++){
    cout << arr[i] << " ";
} cout << endl;

// heapsort
heapSort(arr, n);
cout << "printing the heapsort " << endl;
for(int i = 1; i< n ; i++){
    cout << arr[i] << " ";
} cout << endl;

// maxheap
priority_queue<int> pq;

pq.push(4);
pq.push(2);
pq.push(3);
pq.push(5);

cout<< " elements at top " << pq.top() << endl;
pq.pop();
cout<< " elements at top " << pq.top() << endl;
cout<< " size is " << pq.size() << endl;

return 0;
}