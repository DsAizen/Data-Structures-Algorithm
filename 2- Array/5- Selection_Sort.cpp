//Selection_Sort

#include <iostream>

using namespace std;
int selection_sort(int a[], int n){
    
        for(int i=0; i<n-1; i++){
            int temp_ans=i;
            for(int j=i+1; j<n; j++){
                 if(a[temp_ans]>a[j]){
                     temp_ans=j;
                 }
            }swap(a[i],a[temp_ans]);
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
    selection_sort(a,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
    

    return 0;
}
