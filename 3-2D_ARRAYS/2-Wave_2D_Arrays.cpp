
//Wave 2D Arrays:

#include <iostream>

using namespace std;

int main()
{
    int a[100][100];
    int m,n;
    cout<<"enter m,n = ";
    cin>>m>>n;
    int val=1;
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            a[row][col]=val;
             val++;
            cout<<a[row][col]<<" ";
           
        }cout<<endl;
    }
    cout<<"Wave 2D Araays are - "<<endl;
    for(int col=0; col<n; col++){
        int row;
        if(col%2==0){
            for(row=0; row<m; row++){
                cout<<a[row][col]<<" ";
            }
        } 
        else{
            for(row=m-1; 0<=row; row--){
                cout<<a[row][col]<<" ";
                }
             }
        } 
    
    
 return 0;
}
