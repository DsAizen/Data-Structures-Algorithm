#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[100];
    char largest[100];
    int len=0;
    int maxlen=0;
    int n;
    cin>>n;
    
     cin.get();
     for(int i=0; i<n; i++){
         cin.getline(a,100);
          
          len=strlen(a);
          if(len > maxlen){
          maxlen = len;
          strcpy( largest,a);
          }
     }
     cout<<largest<<maxlen;
    
        

    return 0;
}
