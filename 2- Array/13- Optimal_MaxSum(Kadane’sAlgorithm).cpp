//Optimal_MaxSum(Kadane’sAlgorithm)

//maximum subarray sum1:

#include <iostream>

using namespace std;

int main()
{	
    int n;
    cout<<"Enter n =";
    cin>>n;
    int a[100];
    
    int current_sum=0;
    int maximum_sum=0;
    
    for(int i=0; i<n; i++){
        cin>>a[i];}
     
     for(int i=0; i<n; i++){
        
        current_sum += a[i];
        if(current_sum < 0){
            current_sum = 0;
        }
        maximum_sum = max(current_sum,maximum_sum);
     }
      cout<<"maximum_sum is  "<<maximum_sum<<endl;
      
    return 0;
}
