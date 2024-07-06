// // // wavePrint

// // // #include<iostream>
// // // #include<vector>
// // // using namespace std;

// // // vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols) {
// // //     vector<int> ans;

// // //     for (int col = 0; col < mCols; col++) {
// // //         if (col & 1) {
// // //             // odd index -> bottom to top
// // //             for (int row = nRows - 1; row >= 0; row--) {
// // //                 ans.push_back(arr[row][col]);
// // //             }
// // //         } else {
// // //             // 0 or even index -> top to bottom
// // //             for (int row = 0; row < nRows; row++) {
// // //                 ans.push_back(arr[row][col]);
// // //             }
// // //         }
// // //     }
// // //     return ans;
// // // }

// // // int main() {
// // //     // Initialize a 2D vector
// // //     vector<vector<int>> arr = {
// // //         {1, 2, 3},
// // //         {4, 5, 6},
// // //         {7, 8, 9}
// // //     };

// // //     // Call the wavePrint function with correct dimensions
// // //     vector<int> ans = wavePrint(arr, 3, 3);

// // //     // Print the wave print result
// // //     for (int num : ans) {
// // //         cout << num << " ";
// // //     }

// // //     return 0;
// // // }

// // // spiral print 

// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // class Solution {
// // public:
// //     vector<int> spiralOrder(vector<vector<int> >& matrix) {
        
        
// //         vector<int> ans;
// //         int row = matrix.size();
// //         int col = matrix[0].size();
        
// //         int count = 0;
// //         int total = row*col;
        
// //         //index initialisation
// //         int startingRow = 0;
// //         int startingCol = 0;
// //         int endingRow = row-1;
// //         int endingCol = col-1;
        
        
// //         while(count < total) {
            
// //             //print starting row
// //             for(int index = startingCol; count < total && index<=endingCol; index++) {
// //                 ans.push_back(matrix[startingRow][index]);
// //                 count++;
// //             }
// //             startingRow++;
            
// //             //print ending column
// //             for(int index = startingRow; count < total && index<=endingRow; index++) {
// //                 ans.push_back(matrix[index][endingCol]);
// //                 count++;
// //             }
// //             endingCol--;
            
// //             //print ending row
// //             for(int index = endingCol; count < total && index>=startingCol; index--) {
// //                 ans.push_back(matrix[endingRow][index]);
// //                 count++;
// //             }
// //             endingRow--;
            
// //             //print starting column
// //             for(int index = endingRow; count < total && index>=startingRow; index--) {
// //                 ans.push_back(matrix[index][startingCol]);
// //                 count++;
// //             }
// //             startingCol++;
// //         } 
// //         return ans;
// //     }
// // };
// // int main() {
// //     // Initialize a 2D vector
// //     vector<vector<int>> arr = {
// //         {1, 2, 3},
// //         {4, 5, 6},
// //         {7, 8, 9}
// //     };

// //     // Create an instance of the Solution class
// //     Solution sol;

// //      // Call the spiralOrder function
// //     vector<int> ans = sol.spiralOrder(arr);

// //     // Print the wave print result
// //     for (int num : ans) {
// //         cout << num << " ";
// //     }

// //     return 0;
// // }


// // search in 2d matrix1

// #include<iostream>
// #include<vector>
// using namespace std;
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int> >& matrix, int target) {
        
//         int row = matrix.size();
//         int col = matrix[0].size();
        
//         int start = 0;
//         int end  = row*col-1;
        
//         int mid = start + (end-start)/2;
        
//         while(start<=end) {
            
//             int element = matrix[mid/col][mid%col];
            
//             if(element == target) {
//                 return 1;
//             }
            
//             if(element < target) {
//                 start = mid+1;
//             }
//             else
//             {
//                 end = mid-1;
//             }
//              mid = start + (end-start)/2;    
//         }
//         return 0;
//     }
// };
// int main() {
//     // Initialize a 2D vector
//     vector<vector<int>> matrix = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     // Create an instance of the Solution class
//     Solution sol;

//     // Define the target value
//     int target = 81 ;

//      // Call the spiralOrder function
//     bool ans = sol.searchMatrix(matrix, target);

//    // Print the result
//     if (ans) {
//         cout << "Target " << target << " found in the matrix." << endl;
//     } else {
//         cout << "Target " << target << " not found in the matrix." << endl;
//     }

//     return 0;
// }


// 2d arr search2

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        
        int rowIndex = 0;
        int colIndex = col-1;
        
        while(rowIndex < row && colIndex>=0 ) {
            int element = matrix[rowIndex][colIndex];
            
            if(element == target) {
                return 1;
            }
            
            if(element < target){
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
    }
};
int main() {
    // Initialize a 2D vector
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Create an instance of the Solution class
    Solution sol;

    // Define the target value
    int target = 8 ;

     // Call the spiralOrder function
    bool ans = sol.searchMatrix(matrix, target);

   // Print the result
    if (ans) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }

    return 0;
}