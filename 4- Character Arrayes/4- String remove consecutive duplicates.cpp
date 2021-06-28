// i\p- ccoooding.  o\p- coding

#include <iostream>
#include <cstring>

using namespace std;
   int main(){
       
   char a[100];
   cin.get(a,100);
   int j=0;
   int n=strlen(a);
   
   if(n==1 && n==0){
       return 0;
   }
   for(int i=1; i<n; i++){
       if(a[j] != a[i]){
           j++;
           a[j] = a[i];
           
       }
       
   }a[j+1] = '\0';
   
  cout<<a;
    return 0;
}
