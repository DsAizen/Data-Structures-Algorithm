
//Bubble_Sort
#include <iostream>

using namespace std;
int Bubble_sort(int a[], int n){
    
        for(int itr=0; itr<n-1; itr++){
            for(int j=0; j<n-itr-1; j++){
                 if(a[j]>a[j+1]){
                     swap(a[j],a[j+1]);
                 }
            }
        }
    }
int main()
{
    int n;
    cout<<"enter n =";
    cin>>n;
    int a[100];
    cout<<"enter array =";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"sorted array =";
    Bubble_sort(a,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    

    return 0;
}
