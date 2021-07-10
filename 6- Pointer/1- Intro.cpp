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
    cout<<y;
    
    

    return 0;
}
