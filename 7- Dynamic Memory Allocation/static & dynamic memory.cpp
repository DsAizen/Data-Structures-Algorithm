
/*Memory Allocation: Memory allocation is a process by which computer programs and services are assigned with physical or virtual memory space. The memory allocation is done either before or at the time of program execution. There are two types of memory allocations: 
 

Compile-time or Static Memory Allocation
Run-time or Dynamic Memory Allocation
Static Memory Allocation: Static Memory is allocated for declared variables by the compiler. The address can be found using the address of operator and can be assigned to a pointer. The memory is allocated during compile time. 

Dynamic Memory Allocation: Memory allocation done at the time of execution(run time) is known as dynamic memory allocation. Functions calloc() and malloc() support allocating dynamic memory. In the Dynamic allocation of memory space is allocated by using these functions when the value is returned by functions and assigned to pointer variables. 

 */

//using new and delete keyword ->
#include <iostream>

using namespace std;

int main()
{
    //allocation + deallocation = compiler
    int b[100] = {0};
    cout<<sizeof(b)<<endl;
    cout<<b<<endl;           //symbol mutable
    //here b can't be overwritten , b is part of RAM
    
    //dynamic allocation (on the fly) runtime
    int n;
    cout<<"enter size";
    cin>>n;
    int *a = new int[n]{0};
    cout<<sizeof(a)<<endl;
    cout<<a<<endl;           
    //variable a that is created inside the static memory -> ovetwritten
    // a = new char [30];
    
    //no change
    cout<<"enter numbers";
    for(int i=0; i<n; i++){
        cin>>a[i];
        cout<<a[i]<<endl;
    }
    
    //freeup the space -> to avoid memory waste
    delete [] a;
    
    return 0;
}
