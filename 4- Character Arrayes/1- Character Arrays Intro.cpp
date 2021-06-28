
#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4};   //address of an array
    
    char b[10]={'a','b','c'}
    cin>>b;                 //content of the array+garbage value (5)
    
    char c[]={'x','y','z','\0'};
                                //content (6)
    cout<<b<<" "<<sizeof(b);
    return 0;
}
