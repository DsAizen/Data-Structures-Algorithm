
//Rotate image(colock wise)
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
