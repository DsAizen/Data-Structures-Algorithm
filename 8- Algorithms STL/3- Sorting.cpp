#include <bits/stdc++.h>
using namespace std;
bool compare(int a, int b){
    return a>b;   //for decending also we can create according to 11111, 222 no od digit sort
}
int main()
{

    
    int a[]={2,33,1,23,11};
    int n= sizeof(a)/sizeof(int);
    
   sort(a,a+n,compare);
   for(int i=0; i<n; i++){
       cout<<a[i]<<" ";
   }
    return 0;
}
