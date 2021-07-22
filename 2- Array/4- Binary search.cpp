//binary search

#include <iostream>

using namespace std;
int binary_search(int a[], int n, int key){
int s=0;
int e=n-1;
while(s<=e){
int mid=(s+e)/2;
if(a[mid]==key){
return mid;
}else if(a[mid]<key){
s=mid+1;
}else{
e=mid-1;
}
}
return -1;
}

int main(){
        int a[100];
       
        int n;
        cout<<"enter n =";
        cin>>n;
         
         cout<<"enter array =";
        
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int key;
         cout<<"enter key =";
         cin>>key;
         
    
    cout<<"key index="<<binary_search(a, n, key);

    return 0;
}
