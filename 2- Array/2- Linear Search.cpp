//LINEAR SEARCH:
#include <iostream>

using namespace std;

int main()
{
    int j,i,n;
    cout<<"enter n=";
    cin>>n;
    int a[100]={0};
    cout<<"enter array=";
    for( i=0; i<n; i++){
        cin>>a[i];
    }
    int key;
    cout<<" enter key=";
    cin>>key;
    for(i=0; i<n; i++){
        if(a[i]==key){
            cout<<"found given key & key index no="<<i;
            break;
        }
    }if(i==5){
        cout<<"not found";
    }
  

    return 0;
}
