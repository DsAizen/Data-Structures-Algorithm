/*The header algorithm defines a collection of functions especially designed to be used on ranges of elements.
<algorithm> */


#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {2,5,1,9};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
 
    
    auto search = find(arr, arr+n,key);
    int index = search - arr;
    
       if (index==n){
           cout<<key<<"key not found ";
       }else{
    cout<<"key index = "<< index;
       }
    
    

    return 0;
}
