//2d Array_Print
#include <iostream>

using namespace std;
void spiralPrint(int a[100][100], int m, int n){
    int sr=0;
    int sc=0;
    int ec=n-1;
    int er=m-1;
    while(sr<=er and sc<=ec ){
        
        for(int i=sc; sc<=ec; i++){
            cout<<a[sr][i];
        }sr++;
        
           for(int i=sr; sr<=er; i++){
               cout<<a[i][er];
           }ec--;
           
              for(int i=ec; sc<=ec; i--){
                  cout<<a[er][i];
              }er--;
              
                 for(int i=er; sr<=er; i--){
                     cout<<a[i][sc];
                 }sc++;
    }
}
int main()
{	
    int a[100][100];
    int m,n;
    cout<<"Row&Col = ";
    cin>>m>>n;
    int val=1;
    for(int row=0; row<m; row++){
        for(int col=0; col<n; col++){
            a[row][col]=val;
             val++;
            cout<<a[row][col]<<" ";
           
        }cout<<endl;
    }
    
    spiralPrint(a,m,n);
    return 0;
}
