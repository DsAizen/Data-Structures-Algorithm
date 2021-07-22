
//Largest&Smallest number in array
#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int i,n;
    int a[100000];
    cout<<"enter n =";
    cin>>n;
    cout<<" enter array =";
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    
    int largest=INT_MIN;
    int smallest=INT_MAX;
    
    for(i=0; i<n; i++){
    largest=max(largest,a[i]);
    smallest=min(smallest,a[i]);
    }
    /******************************************************************************

                              for(i=0; i<n; i++){
        if(a[i]>largest){
            largest=a[i]; } }
     for(i=0; i<n; i++){
        if(a[i]<smallest){
            smallest=a[i];}}
*******************************************************************************/
    
    cout<<"largest ="<<largest<<endl;
    cout<<"smallest ="<<smallest;
   
    return 0;
}

    
