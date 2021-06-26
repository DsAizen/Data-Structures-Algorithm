#include <iostream>

using namespace std;

int main()
{
    char string[50][100];
    int n;
    cin>>n;
     cin.get();
     for(int i=0; i<n; i++){
         cin.getline(string[i],100);
     }
     for(int i=0; i<n; i++){
         cout<<string[i];
     }

    return 0;
}
