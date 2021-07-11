/*a pointer refers to a variable that holds the address of another variable. Like regular variables, pointers have a data type. For example, a pointer of type integer can hold the address of a variable of type integer*/
#include <iostream>

using namespace std;

int main()
{
    int a= 9;
    int a1 = 10;
    cout<<&a<<endl;
    
    char ch= 'd';
    cout<<(void*)&ch<<endl;//(int*)
    
    int *y = &a; //declare with initialization
   // y=&a;
    cout<<y<<endl;
    
    //Re - assign another address to the vairable
    y = &a1;
    cout<<y<<endl;
    
    return 0;
}

    
    --------------------------------------------------
        //Derefrencing of pointer - (&bucket - address), (*address - bucket)
#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int *xptr = &x;
    
    cout<<&x<<endl;
    cout<<xptr<<endl;
    cout<< *(&x)<<endl;
    cout<< *(xptr)<<endl;
    cout<< *(&xptr)<<endl;
    cout<< &(*xptr)<<endl;
    cout<< &xptr<<endl;
    
    //o/p - add , add, 10, 10, add, add, add(xptr);
    
    int **xxptr = &xptr;//Double Pointer - ** which store the address of another pointer;
    cout<<xxptr;

    return 0;
}

    
    
