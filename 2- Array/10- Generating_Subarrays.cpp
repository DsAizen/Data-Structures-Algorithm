

//Generating_Subarrays:

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter n =";
    cin>>n;
    int a[100];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
     cout<<"Generating subarrays :"<<endl;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=i; k<=j; k++){
                cout<<a[k]<<',';
            }cout<<" ";
        }cout<<endl;
    }

    return 0;
}
