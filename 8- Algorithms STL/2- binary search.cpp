//binary search


       
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int key=2;
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    
    bool present = binary_search(a,a+n,key);
    if(present){
        cout<<"found";
    }else{
        cout<<"not found";
    }
    return 0;
}

///////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main()
{

    int key=2;
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    
    int s=0;
    int e=4;
    
    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid] == key){
            cout<<"element found";
           break;
            
        }else if(a[mid]<key){
            s = mid + 1;
        }else if(a[mid]>key){
            e = mid-1;
        }
        
    } 

    return 0;
}
