//Bubble_Sort with compare function 
// How do we pass function as a parameter - bool (&cmp)(int a,int b)
#include <bits/stdc++.h>
bool compare(int a,int b){
    return a>b;
}

using namespace std;
int Bubble_sort(int a[], int n, bool (&cmp)(int a,int b)){
    
        for(int itr=0; itr<n-1; itr++){
            for(int j=0; j<n-itr-1; j++){
                 if(cmp(a[j],a[j+1])){
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
    Bubble_sort(a,n,compare);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    

    return 0;
}
