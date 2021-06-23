#include <iostream>

using namespace std;

int main()
{
   int a[3][3]={1,2,3,4,5,6,7,8,9};
   int i=0; 
   int j=2;
   int key=8;
   while(i<=j){
       if(a[i][j]==key){
           cout<<i<<" "<<j;
           break;
       }else if(a[i][j]>key){
           j--;
       }else if(a[i][j]<key){
           i++;
       }
   }
   

    return 0;
}
