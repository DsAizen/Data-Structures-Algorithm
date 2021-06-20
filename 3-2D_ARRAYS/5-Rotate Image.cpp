
/*Rotate image(colock wise)
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]] */
#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            cin>>a[row][col];
        }
     }
    
     int transpose[m][n];
     for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            transpose[col][row]=a[row][col];
        }
     }
     
     
     for(int row=0; row<m; row++){
        for(int col=0; col<n/2; col++){
            swap(transpose[row][col],transpose[row][3-col-1]);
        }
     }
     
     for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            cout<<transpose[row][col];
        }
     }
    return 0;
}
