
/*Rotate image(colock wise)
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]] */
#include <iostream>

using namespace std;
void rotate_image(int a[100][100], int m, int n){
    for(int col=0; col<n; col++){
        for(int row=n-1; row>=0; row--){
            cout<<a[row][col]<<" ";
        }cout<<endl;
    }
}
int main()
{	
    int a[100][100];
    int m,n;
    cout<<"enter m&n =";
    cin>>m>>n;
    int val=1;
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            a[row][col]=val;
             val++;
            cout<<a[row][col]<<" ";
           
        }cout<<endl;
    }
    cout<<"----------------------"<<endl;
    rotate_image(a,m,n);
    return 0;
}
