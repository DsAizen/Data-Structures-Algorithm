//BRUT_FORCE_APPROACH-
#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cout<<"enter n = ";
    cin>>n;
    cout<<"enter array = ";
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k;
    cout<<"enter sum = ";
    cin>>k;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]+a[j] == k){
                cout<<a[i]<<','<<a[j]<<" ";
            }
        }
    }
    
    

    return 0;
}

//OPTIMAL APPROACH (FOR SORTED ARRAY)-

#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cout<<"enter n = ";
    cin>>n;
    cout<<"enter array = ";
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k;
    cout<<"enter sum = ";
    cin>>k;
    int i=0;
    int j=sizeof(a)/sizeof(int)-1;
    while(i<j){
        int cs=a[i]+a[j];
        if(cs>k){
            j--;
        }else if(cs<k){
            i++;
        }else{
            cout<<a[i]<<','<<a[j]<<" ";
            i++;
            j--;
        }
    }
    
    

    return 0;
}
