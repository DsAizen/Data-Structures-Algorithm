/* Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. 
i/p - apple,mango,banana;    o/p - apple,banana,mango;
*/


#include <iostream>
#include <algorithm>
#include <string>
/* to create your own compare fun 
 bool compare(string s1, string s2){
      if( a.length() == b.length() ){
          return a<b;
      }else{
     return a.length()<b.length;
      }
 } */
using namespace std;

int main()
{
    string s[100];
    int n;
    cin>>n;
    
    cin.get();
    for(int i=0; i<n; i++){
        getline(cin,s[i]);
    }
     sort(s,s+n);//sort(s,s+n,compare);
    
    for(int i=0; i<n; i++){
        cout<<s[i]<<endl;
    }

    return 0;
  
}
