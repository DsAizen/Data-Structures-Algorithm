//maximum_subarray_sum2:

#include <iostream>

using namespace std;

int main()
{	
    int n;
    cout<<"Enter n =";
    cin>>n;
    int a[100];
    int cumsum[100] = {0};
    int current_sum=0;
    int maximum_sum=0;
    int start=-1;
    int end=-1;
    
    cin>>a[0];
    cumsum[0]=a[0];
    
    for(int i=1; i<n; i++){
        cin>>a[i];
        cumsum[i] = cumsum[i-1] + cumsum[i];
    }
     
    for(int i=0; i<n; i++){
        
        for(int j=i; j<n; j++){
            
            current_sum=0;
               current_sum=cumsum[j]-cumsum[i-1];
               
            if(current_sum>maximum_sum){
                maximum_sum = current_sum;
                start=i;
                end=j;
            }
        }
    }
      cout<<"maximum_sum is  "<<maximum_sum<<endl;
      for(int k=start; k<=end; k++){
          cout<<a[k]<<',';
      }
    return 0;
}
