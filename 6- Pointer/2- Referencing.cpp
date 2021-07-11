/*In this example, we can clearly see that the value of variable “count” is not updated if it is passed by value. However, it gets updated when the variable “count” is passed by reference.*/
#include <iostream>

using namespace std;
//call by value - actual parameter passes value 
void increament(int cnt){
    cnt = cnt+1;
}
int main()
{
    int cnt = 0;
    increament(cnt);
    cout<<cnt;           //o/p - 0;
    return 0;
}
//call by reference - actual parameter passes with reference (&) ;
void increament(int &cnt){
    cnt = cnt+1;
}
int main()
{
    int cnt = 0;
    increament(cnt);
    cout<<cnt;           //o/p - 1;
    return 0;
}
